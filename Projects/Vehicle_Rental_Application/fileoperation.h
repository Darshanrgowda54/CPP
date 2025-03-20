#ifndef FILEOPERATION_H
#define FILEOPERATION_H

#include "bike.h"
#include "car.h"
#include "rentaldetails.h"
#include <list>
class FileOperation
{
public:
    FileOperation();
    ~FileOperation();

    void writeCarData(std::list<Car*> carList);
    std::list<Car*> readCarData();

    void writeBikeData(std::list<Bike*> bikeList);
    std::list<Bike*> readBikeData();

    void writeRentalHistory(std::list<RentalDetails*> rentalHistory);
    std::list<RentalDetails*> readRentalHistory();

};

#endif // FILEOPERATION_H
