#include "soundmanager.h"
#include <QDebug>

SoundManager::SoundManager()
{
    qDebug()<<"SoundManager Constructor Called";
}

SoundManager::~SoundManager()
{
    qDebug()<<"SoundManager Destructor Called";
}

void SoundManager::announce(QString message)
{
    qDebug()<<message;
}
