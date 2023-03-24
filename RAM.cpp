#include "RAM.h"

RAM::RAM()
{
	this->name = "Default RAM model";
	cout << "\tRAM default constr - " << this;
}

RAM::RAM(const string name)
{
	this->name = name;
	cout << "\tRAM param constr - " << this;
}

void RAM::Print()
{
	cout << "RAM name: " << this->name << endl;
}
