#ifndef FILEOPERATION_H
#define FILEOPERATION_H

#include "admins.h"
#include "rentalbikes.h"
#include "rentalcars.h"
#include "rentaldetails.h"
#include "users.h"
#include <list>
class FileOperation
{
public:
    FileOperation();
    ~FileOperation();

    void writeCarData(std::list<RentalCars*> carList);
    std::list<RentalCars*> readCarData();

    void writeBikeData(std::list<RentalBikes*> bikeList);
    std::list<RentalBikes*> readBikeData();

    void writeRentalHistory(std::list<RentalDetails*> rentalHistory);
    std::list<RentalDetails*> readRentalHistory();

    void writeAdminData(std::list<Admins*> adminList);
    std::list<Admins*> readAdminData();

    void writeUserData(std::list<Users*> userList);
    std::list<Users*> readUserData();

};

#endif // FILEOPERATION_H
