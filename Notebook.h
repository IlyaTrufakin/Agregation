#pragma once
#include "CPU.h"
#include "RAM.h"
#include "VideoCard.h"
#include "Mouse.h"
#include "Camera.h"
#include "Printer.h"
#include <string.h>
#include<iostream>
using namespace std;

class Notebook
{
    string name;
    CPU cpu;
    RAM ram;
    VideoCard videocard;
    Mouse* mouse;
    Camera* camera;
    Printer* printer;
public:
    Notebook() = delete; //: name{ "Notebook default name" }, cpu{}, ram{}, videocard{}, mouse{ new Mouse}, camera{ new Camera }, printer{ new Printer } {};
    Notebook(const string name, const string cpuName, const string ramName, const string videoCardName, Mouse* _mouse, Camera* _camera, Printer* _printer);
    Notebook(Notebook& obj);
    ~Notebook() { cout << endl << "Notebook destructor - " << this << endl; }
    void Print();
};