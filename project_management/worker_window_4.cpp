#include "worker_window_4.h"
#include <QTimer>
#include <QEventLoop>
#include <QThread>
#include <QDebug>
#include <QFile>
#include "management.h"
#include "project_window_4.h"

worker_window_4::worker_window_4(QObject *parent): QObject(parent)
{
    _working = false;
    _abort = false;
}

void worker_window_4::requestWork()
{
    mutex.lock();
    _working = true;
    _abort = false;
    mutex.unlock();
    emit workRequested();
}

void worker_window_4::doWork()
{
    int read_line = 0;
    while (true)
    {
        QFile file("C:/project/" + management::username + '/' + project_window_4::project_name + "/all_users.txt");
        file.open(QIODevice::ReadOnly);
        int line = 0;
        while (!file.atEnd())
        {
            file.readLine();
            line++;
        }
        file.close();
        if (line > read_line)
        {
            file.open(QIODevice::ReadOnly);
            for (int counter = 0; counter < read_line; counter++)
                file.readLine();
            while (!file.atEnd())
            {
                mutex.lock();
                bool abort = _abort;
                mutex.unlock();
                if (abort)
                    break;
                emit valueChanged(file.readLine());
                file.readLine();
            }
            file.close();
        }
        else if (read_line > line)
        {
            emit clear();
            file.open(QIODevice::ReadOnly);
            while (!file.atEnd())
            {
                mutex.lock();
                bool abort = _abort;
                mutex.unlock();
                if (abort)
                    break;
                emit valueChanged(file.readLine());
                file.readLine();
            }
            file.close();
        }
        read_line = line;
        QEventLoop loop;
        QTimer::singleShot(100, &loop, SLOT(quit()));
        loop.exec();
    }
    mutex.lock();
    _working = false;
    mutex.unlock();
    emit finished();
}
