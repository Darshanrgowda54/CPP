#include "batterymanager.h"
#include "soundmanager.h"
#include <QApplication>

using namespace std;

int main(int argc,char* argv[])
{
    QApplication app(argc,argv);
    BatteryManager battery;
    SoundManager sound;

    QObject::connect(&battery,&BatteryManager::batteryLow,&sound,&SoundManager::announce,Qt::UniqueConnection);

    battery.batterypercentage();
    return app.exec();
}
