#include "worker.h"
#include <QTimer>
#include <QEventLoop>
#include <QThread>
#include <QDebug>
#include <QFile>
#include "management.h"

Worker::Worker(QObject *parent): QObject(parent)
{
    _working = false;
    _abort = false;
}

void Worker::requestWork()
{
    mutex.lock();
    _working = true;
    _abort = false;
    mutex.unlock();
    emit workRequested();
}

void Worker::doWork()
{
    int read_line = 0;
    while (true)
    {
        QFile file("C:/project/" + management::username + "/projects.txt");
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
    }
    mutex.lock();
    _working = false;
    mutex.unlock();
    emit finished();
}
