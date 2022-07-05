#ifndef WORKER_MESSAGE_H
#define WORKER_MESSAGE_H

#include <QObject>
#include <QMutex>

class worker_message: public QObject
{
    Q_OBJECT

public:
    explicit worker_message(QObject *parent = 0);

    void requestWork();

private:
    bool _abort;

    bool _working;

    QMutex mutex;

signals:
    void workRequested();

    void valueChanged(QString);

    void finished();

    void clear();

public slots:
    void doWork();
};

#endif // WORKER_MESSAGE_H
