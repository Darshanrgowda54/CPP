#ifndef RENTALDETAILS_H
#define RENTALDETAILS_H

#include "vehicle.h"
#include <string>
class RentalDetails
{
public:
    RentalDetails();
    ~RentalDetails();
    RentalDetails(std::string customerName, std::string contactNumber, std::string vehicleType, int rentDuration, Vehicle* vehicle);

    std::string getCustomerName();
    std::string getContactNumber();
    std::string getVehicleType();
    int getRentDuration();
    Vehicle* getVehicleDetails();

    void setVehicleType(std::string type);

private:
    Vehicle* m_vehicle;

    std::string m_customerName;
    std::string m_contactNumber;
    std::string m_vehicleType;
    int m_rentDuration;
};

#endif // RENTALDETAILS_H
