#ifndef WIFI_H
#define WIFI_H

#include <string>
class Wifi
{
public:
    Wifi();
    ~Wifi();

    Wifi(std::string name,float signalStrength,std::string status,std::string password);

    std::string getName();
    float getSignalStrength();
    std::string getStatus();
    std::string getPassword();
private:
    std::string m_wifiName;
    std::string m_wifiStatus;
    std::string m_wifiPassword;
    float m_signalStrength;
};

#endif // WIFI_H
