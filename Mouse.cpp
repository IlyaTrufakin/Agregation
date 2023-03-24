#include "Mouse.h"

Mouse::Mouse()
{
	this->name = "Default Mouse model";
	cout << "\tMouse default constr - " << this;
}

Mouse::Mouse(const string name)
{
	this->name = name;
	cout << "\tMouse param constr - " << this;
}

void Mouse::Print()
{
	cout << "Mouse model name: " << this->name << endl;
}
