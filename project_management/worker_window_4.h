#ifndef WORKER_WINDOW_4_H
#define WORKER_WINDOW_4_H

#include <QObject>
#include <QMutex>

class worker_window_4: public QObject
{
    Q_OBJECT

public:
    explicit worker_window_4(QObject *parent = 0);

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

#endif // WORKER_WINDOW_4_H
