#pragma once
#include <string>
#include<iostream>
using namespace std;

class Mouse
{
	string name;
public:
	Mouse();
	Mouse(const string name);
	Mouse(Mouse& obj) { this->name = obj.name; }
	void Print();
	~Mouse() { cout << "\tMouse destructor - " << this;
	}
};

