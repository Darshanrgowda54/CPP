#ifndef TELEGRAM_H
#define TELEGRAM_H
#include "app.h"

class Telegram:public App
{
public:
    Telegram();
    ~Telegram();
    void appname() override;
    void appicon() override;
    void open() override;
};

#endif // TELEGRAM_H
