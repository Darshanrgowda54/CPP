#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include "camera.h"
#include "music.h"
#include "phone.h"
class SmartPhone:public Camera,public Phone,public Music
{
public:
    SmartPhone(int pexels,int dialpad,std::string musicName);
    ~SmartPhone();
};

#endif // SMARTPHONE_H
