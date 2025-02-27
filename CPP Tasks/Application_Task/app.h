#ifndef APP_H
#define APP_H

class App
{
public:
    App();
    virtual ~App();
    virtual void appname() = 0;
    virtual void appicon() = 0;
    virtual void open() = 0;
};

#endif // APP_H
