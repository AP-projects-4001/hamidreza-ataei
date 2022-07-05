#include "worker_message.h"
#include <QTimer>
#include <QEventLoop>
#include <QThread>
#include <QDebug>
#include <QFile>
#include "management.h"

worker_message::worker_message(QObject *parent): QObject(parent)
{
    _working = false;
    _abort = false;
}

void worker_message::requestWork()
{
    mutex.lock();
    _working = true;
    _abort = false;
    mutex.unlock();
    emit workRequested();
}

void worker_message::doWork()
{
    QString address_level;
    if (message::check == 1)
        address_level = "C:/project/" + management::username + '/' + project_window_1::project_name + "/message/" + message::name + ".txt";
    else if (message::check == 2)
        address_level = "C:/project/" + management::username + '/' + project_window_2::project_name + "/message/" + message::name + ".txt";
    else if (message::check == 3)
        address_level = "C:/project/" + management::username + '/' + project_window_3::project_name + "/message/" + message::name + ".txt";
    else if (message::check == 4)
        address_level = "C:/project/" + management::username + '/' + project_window_4::project_name + "/message/" + message::name + ".txt";
    int line_read = 0;
    while (true)
    {
        QFile file(address_level);
        file.open(QIODevice::ReadOnly);
        int line = 0;
        while (!file.atEnd())
        {
            file.readLine();
            line++;
        }
        file.close();
        if (line > line_read)
        {
            mutex.lock();
            bool abort = _abort;
            mutex.unlock();
            if (abort)
                break;
            file.open(QIODevice::ReadOnly);
            for (int counter = 0; counter < line_read; counter++)
                file.readLine();
            while (!file.atEnd())
            {
                QString temp_1 = file.readLine();
                std::string temp_2 = file.readLine().toStdString();
                temp_2.pop_back();
                if (temp_1 == "0\n")
                    emit valueChanged("me:");
                else if (temp_1 == "1\n")
                    emit valueChanged(message::name + ":");
                emit valueChanged(QString::fromStdString(temp_2) + "\n");
            }
            file.close();
        }
        else if (line_read > line)
        {
            mutex.lock();
            bool abort = _abort;
            mutex.unlock();
            if (abort)
                break;
            emit clear();
            file.open(QIODevice::ReadOnly);
            while (!file.atEnd())
            {
                QString temp_1 = file.readLine();
                std::string temp_2 = file.readLine().toStdString();
                temp_2.pop_back();
                if (temp_1 == "0\n")
                    emit valueChanged("me:");
                else if (temp_1 == "1\n")
                    emit valueChanged(message::name + ":");
                emit valueChanged(QString::fromStdString(temp_2) + "\n");
            }
            file.close();
        }
        line_read = line;
        QEventLoop loop;
        QTimer::singleShot(100, &loop, SLOT(quit()));
        loop.exec();
    }
    mutex.lock();
    _working = false;
    mutex.unlock();
    emit finished();
}
