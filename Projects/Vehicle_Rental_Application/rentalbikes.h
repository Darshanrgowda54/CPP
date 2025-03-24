#ifndef RENTALBIKES_H
#define RENTALBIKES_H

#include "rentalvehicles.h"
class RentalBikes:public RentalVehicles
{
public:
    RentalBikes();
    ~RentalBikes();
    RentalBikes(std::string brand,std::string model,std::string vehicleNumber,std::string status,float rentPrice);
};

#endif // RENTALBIKES_H
