#pragma once
#include <string>
#include<iostream>
using namespace std;

class CPU
{
	string name;
public:
	CPU();
	CPU(const string name);
	CPU(CPU& obj) {this->name = obj.name;}
	void Print();
	~CPU() { cout << "\tCPU destructor - " << this;
	}
};

