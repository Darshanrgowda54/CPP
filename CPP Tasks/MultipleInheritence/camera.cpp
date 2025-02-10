#include "camera.h"
#include <iostream>

Camera::Camera(int pexel):m_pexel(pexel)
{
    std::cout<<"Constructor Camera Called"<<std::endl;
    std::cout<<"Pexel :"<<m_pexel<<std::endl;
}

Camera::~Camera()
{
    std::cout<<"Destructor Camera Called"<<std::endl;
}

void Camera::takePicture()
{
    std::cout<<"Picture Taken"<<std::endl;
}
