#include "smartphone.h"
#include <iostream>

using namespace std;

int main()
{
    SmartPhone S1(1,2,"ABC");
    S1.makecall();
    S1.playMusic();
    S1.takePicture();
    S1.Phone::display();
    //S1.Music::display();
    //S1.Camera::display();
    cout << "Hello World!" << endl;
    return 0;
}
