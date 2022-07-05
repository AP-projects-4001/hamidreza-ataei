#include "worker_overall.h"
#include <QTimer>
#include <QEventLoop>
#include <QThread>
#include <QDebug>
#include <QFile>
#include "management.h"
#include "overall_status.h"

worker_overall::worker_overall(QObject *parent): QObject(parent)
{
    _working = false;
    _abort = false;
}

void worker_overall::requestWork()
{
    mutex.lock();
    _working = true;
    _abort = false;
    mutex.unlock();
    emit workRequested();
}

void worker_overall::doWork()
{
    QString address_level_1, address_level_2;
    if (overall_status::check == 1)
    {
        address_level_1 = "C:/project/" + management::username + '/' + project_window_1::project_name + "/all_users.txt";
        address_level_2 = "C:/project/" + management::username + '/' + project_window_1::project_name + "/all_tasks.txt";
    }
    else if (overall_status::check == 2)
    {
        address_level_1 = "C:/project/" + management::username + '/' + project_window_2::project_name + "/all_users.txt";
        address_level_2 = "C:/project/" + management::username + '/' + project_window_2::project_name + "/all_tasks.txt";
    }
    else if (overall_status::check == 3)
    {
        address_level_1 = "C:/project/" + management::username + '/' + project_window_3::project_name + "/all_users.txt";
        address_level_2 = "C:/project/" + management::username + '/' + project_window_3::project_name + "/all_tasks.txt";
    }
    else if (overall_status::check == 4)
    {
        address_level_1 = "C:/project/" + management::username + '/' + project_window_4::project_name + "/all_users.txt";
        address_level_2 = "C:/project/" + management::username + '/' + project_window_4::project_name + "/all_tasks.txt";
    }
    int read_line_u = 0;
    int read_line_t = 0;
    while (true)
    {
        QFile file(address_level_1);
        file.open(QIODevice::ReadOnly);
        int line_u = 0;
        while (!file.atEnd())
        {
            file.readLine();
            line_u++;
        }
        file.close();
        if (line_u > read_line_u)
        {
            file.open(QIODevice::ReadOnly);
            for (int counter = 0; counter < read_line_u; counter++)
                file.readLine();
            while (!file.atEnd())
            {
                mutex.lock();
                bool abort = _abort;
                mutex.unlock();
                if (abort)
                    break;
                std::string temp = '\n' + file.readLine().toStdString();
                temp.pop_back();
                temp = temp + "          .....          access level: " +  file.readLine().toStdString();
                emit valueChanged_u(QString::fromStdString(temp));
            }
            file.close();
        }
        else if (read_line_u > line_u)
        {
            emit clear_users();
            file.open(QIODevice::ReadOnly);
            while (!file.atEnd())
            {
                mutex.lock();
                bool abort = _abort;
                mutex.unlock();
                if (abort)
                    break;
                std::string temp = '\n' + file.readLine().toStdString();
                temp.pop_back();
                temp = temp + "          .....          access level: " +  file.readLine().toStdString();
                emit valueChanged_u(QString::fromStdString(temp));
            }
            file.close();
        }
        QFile file_2(address_level_2);
        file_2.open(QIODevice::ReadOnly);
        int line_t = 0;
        while (!file_2.atEnd())
        {
            file_2.readLine();
            line_t++;
        }
        file_2.close();
        if (line_t > read_line_t)
        {
            file_2.open(QIODevice::ReadOnly);
            for (int counter = 0; counter < read_line_t; counter++)
                file_2.readLine();
            while (!file_2.atEnd())
            {
                mutex.lock();
                bool abort = _abort;
                mutex.unlock();
                if (abort)
                    break;
                std::string temp = '\n' + file_2.readLine().toStdString();
                temp.pop_back();
                int temp_2 = file_2.readLine().toInt();
                if (temp_2 == 0)
                    temp = temp + "          .....          not assigned";
                else if (temp_2 == 1)
                    temp = temp + "          .....          assigned to ";
                else
                    temp = temp + "          .....          completed by ";
                temp = temp + file_2.readLine().toStdString();
                emit valueChanged_t(QString::fromStdString(temp));
            }
            file_2.close();
        }
        else if (read_line_t > line_t)
        {
            emit clear_tasks();
            file_2.open(QIODevice::ReadOnly);
            while (!file_2.atEnd())
            {
                mutex.lock();
                bool abort = _abort;
                mutex.unlock();
                if (abort)
                    break;
                std::string temp = '\n' + file_2.readLine().toStdString();
                temp.pop_back();
                int temp_2 = file_2.readLine().toInt();
                if (temp_2 == 0)
                    temp = temp + "          .....          not assigned";
                else if (temp_2 == 1)
                    temp = temp + "          .....          assigned to ";
                else
                    temp = temp + "          .....          completed by ";
                temp = temp + file_2.readLine().toStdString();
                emit valueChanged_t(QString::fromStdString(temp));
            }
            file_2.close();
        }
        read_line_u = line_u;
        read_line_t = line_t;
    }
    mutex.lock();
    _working = false;
    mutex.unlock();
    emit finished();
}