#include "Camera.h"

Camera::Camera()
{
	this->name = "Default Camera model";
}

Camera::Camera(const string name)
{
	this->name = name;
}

void Camera::Print()
{
	cout << "Camera model name: " << this->name << endl;
}
