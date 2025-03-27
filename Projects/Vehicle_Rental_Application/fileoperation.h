#ifndef FILEOPERATION_H
#define FILEOPERATION_H

#include "admin.h"
#include "rentalbikes.h"
#include "rentalcars.h"
#include "rentaldetails.h"
#include "user.h"
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

    void writeAdminData(std::list<Admin*> adminList);
    std::list<Admin*> readAdminData();

    void writeUserData(std::list<User*> userList);
    std::list<User*> readUserData();

};

#endif // FILEOPERATION_H
