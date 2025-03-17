#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle
{
public:
    Vehicle();
    ~Vehicle();
    Vehicle(std::string brand, std::string model, std::string vehicleNumber, float rentPrice,std::string status);

    std::string getBrand();
    std::string getModel();
    std::string getVehicleNumber();
    float getRentPrice();
    std::string getStatus();

    void setBrand(std::string brand);
    void setModel(std::string model);
    void setVehicleNumber(std::string vehicleNumber);
    void setRentPrice(float rentPrice);
    void setStatus(std::string status);

protected:
    std::string m_brand;
    std::string m_model;
    std::string m_vehicleNumber;
    float m_rentPrice;
    std::string m_status;
};

#endif // VEHICLE_H
