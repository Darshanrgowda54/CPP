#ifndef CAMERA_H
#define CAMERA_H

class Camera
{
    int m_pexel;
public:
    Camera(int pexel);
    ~Camera();
    void takePicture();
    void display();
};

#endif // CAMERA_H
