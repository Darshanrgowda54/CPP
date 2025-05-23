#ifndef RENTALVEHICLES_H
#define RENTALVEHICLES_H

#include <string>

class RentalVehicles
{
public:
    RentalVehicles();
    ~RentalVehicles();
    RentalVehicles(std::string brand, std::string model, std::string vehicleNumber, std::string status, float rentPrice);

    std::string getBrand();
    std::string getModel();
    std::string getVehicleNumber();
    std::string getStatus();
    float getRentPrice();

    void setBrand(std::string brand);
    void setModel(std::string model);
    void setVehicleNumber(std::string vehicleNumber);
    void setStatus(std::string status);
    void setRentPrice(float rentPrice);

protected:
    std::string m_brand;
    std::string m_model;
    std::string m_vehicleNumber;
    std::string m_status;
    float m_rentPrice;
};

#endif // RENTALVEHICLES_H
