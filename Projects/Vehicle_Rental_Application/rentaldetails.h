#ifndef RENTALDETAILS_H
#define RENTALDETAILS_H

#include "paymentmode.h"
#include "rentalvehicles.h"
#include <string>
class RentalDetails
{
public:
    RentalDetails();
    ~RentalDetails();
    RentalDetails(std::string customerName, std::string contactNumber, std::string vehicleType, int rentDuration, RentalVehicles* vehicle,PaymentMode* payment);

    std::string getCustomerName();
    std::string getContactNumber();
    std::string getVehicleType();
    int getRentDuration();
    RentalVehicles* getRentalVehicleDetails();
    PaymentMode* getPaymentMode();

    void setVehicleType(std::string type);
private:
    RentalVehicles* m_vehicle;
    PaymentMode* m_payment;

    std::string m_customerName;
    std::string m_contactNumber;
    std::string m_vehicleType;
    int m_rentDuration;
};

#endif // RENTALDETAILS_H
