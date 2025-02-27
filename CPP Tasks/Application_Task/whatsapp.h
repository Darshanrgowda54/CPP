#ifndef WHATSAPP_H
#define WHATSAPP_H
#include "app.h"

class WhatsAPP:public App
{
public:
    WhatsAPP();
    ~WhatsAPP();
    void appname() override;
    void appicon() override;
    void open() override;
};

#endif // WHATSAPP_H
