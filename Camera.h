#pragma once
#include <string>
#include<iostream>
using namespace std;

class Camera
{
	string name;
public:
	Camera();
	Camera(const string name);
	Camera(Camera& obj) { this->name = obj.name; }
	void Print();
	~Camera() { cout << "\tCamera destructor - " << this; }
};

