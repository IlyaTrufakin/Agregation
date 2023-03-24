#pragma once
#include <string>
#include<iostream>
using namespace std;

class Printer
{
	string name;
public:
	Printer();
	Printer(const string name);
	Printer(Printer& obj) { this->name = obj.name; }
	void Print();
	~Printer() { cout << "\tPrinter destructor - " << this;
	}

};

