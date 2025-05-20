#include "batterymanager.h"
#include <QDebug>
#include <chrono>
#include <thread>
#include <QDebug>

BatteryManager::BatteryManager():m_capacity(100)
{
   qDebug()<<"Battery Constructor Called";
}

BatteryManager::~BatteryManager()
{
    qDebug()<<"Battery Destructor Called";
}

int BatteryManager::capacity() const
{
    return m_capacity;
}

void BatteryManager::setCapacity(int capacity)
{
    this->m_capacity = capacity;
}


void BatteryManager::batterypercentage()
{
    for(int i= 0; i<20;i++)
    {
        m_capacity = m_capacity - 5;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        if(m_capacity <= 0)
        {
            break;
        }
        if(m_capacity <= 20)
        {
            QString message = "Battery Percentage: " + QString::number(m_capacity);
            emit batteryLow(message);
        }
        qDebug()<<"Battery Percentage: "<<m_capacity;
    }
}
