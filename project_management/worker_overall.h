#ifndef WORKER_OVERALL_H
#define WORKER_OVERALL_H

#include <QObject>
#include <QMutex>

class worker_overall: public QObject
{
    Q_OBJECT

public:
    explicit worker_overall(QObject *parent = 0);

    void requestWork();

private:
    bool _abort;

    bool _working;

    QMutex mutex;

signals:
    void workRequested();

    void valueChanged_u(QString);

    void valueChanged_t(QString);

    void finished();

    void clear_users();

    void clear_tasks();

public slots:
    void doWork();
};

#endif // WORKER_OVERALL_H
