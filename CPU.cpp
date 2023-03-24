#include "CPU.h"

CPU::CPU()
{
	this->name = "Default CPU model";
}

CPU::CPU(const string name)
{
	this->name = name;
}

void CPU::Print()
{
	cout << "CPU name: " << this->name << endl;
}
