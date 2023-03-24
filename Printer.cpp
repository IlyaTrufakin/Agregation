#include "Printer.h"

Printer::Printer()
{
	this->name = "Default Printer model";
}

Printer::Printer(const string name)
{
	this->name = name;
}

void Printer::Print()
{
	cout << "Printer model name: " << this->name << endl;
}
