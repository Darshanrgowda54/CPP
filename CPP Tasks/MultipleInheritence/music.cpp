#include "music.h"
#include <iostream>

Music::Music(std::string musicName):m_musicName(musicName)
{
    std::cout<<"Constructor Music Called"<<std::endl;
    std::cout<<"Music Name :"<<m_musicName<<std::endl;

}

Music::~Music()
{
    std::cout<<"Destructor Music Called"<<std::endl;
}

void Music::playMusic()
{
    std::cout<<"Music Played"<<std::endl;
}
