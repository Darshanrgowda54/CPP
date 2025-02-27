#ifndef INSTAGRAM_H
#define INSTAGRAM_H
#include "app.h"

class Instagram:public App
{
public:
    Instagram();
    ~Instagram();
    void appname() override;
    void appicon() override;
    void open() override;
};

#endif // INSTAGRAM_H
