#pragma once
#include <string>
#include<iostream>
using namespace std;

class RAM
{
	string name;
public:
	RAM();
	RAM(const string name);
	RAM(RAM& obj) { this->name = obj.name; }
	void Print();
	~RAM() { cout << "\tRAM destructor - " << this;
	}
};

