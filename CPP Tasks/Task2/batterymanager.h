#ifndef BATTERYMANAGER_H
#define BATTERYMANAGER_H

#include <QObject>
#include <QTime>

class BatteryManager:public QObject
{
    Q_OBJECT
public:
    BatteryManager();
    ~BatteryManager();

    int capacity() const;
    void setCapacity(int capacity);

    void batterypercentage();

signals:
    void batteryLow(QString);

private:
    int m_capacity;
    QTime m_time;
};

#endif // BATTERYMANAGER_H
