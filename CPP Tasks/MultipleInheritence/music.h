#ifndef MUSIC_H
#define MUSIC_H

#include <string>
class Music
{
    std::string m_musicName;
public:
    Music(std::string musicName);
    ~Music();
    void playMusic();
    void display();
};

#endif // MUSIC_H
