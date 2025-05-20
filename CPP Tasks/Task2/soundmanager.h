#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <QString>
#include <QObject>

class SoundManager:public QObject
{
public:
    SoundManager();
    ~SoundManager();

public slots:
    void announce(QString message);
};

#endif // SOUNDMANAGER_H
