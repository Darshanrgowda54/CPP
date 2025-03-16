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

    void writeCarData(std::list<Car>carList);
    void writeBikeData(std::list<Bike>bikeList);
    std::list<Car> readCarData();
    std::list<Bike> readBikeData();
    std::list<RentalDetails> readRentalHistory();
    void writeRentalHistory(std::list<RentalDetails> rentalHistory);
};

#endif // FILEOPERATION_H
