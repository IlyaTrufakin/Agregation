#include "Notebook.h"




Notebook::Notebook(const string name, const string cpuName, const string ramName, const string videoCardName, Mouse* _mouse, Camera* _camera, Printer* _printer) :
	name{ name }, cpu{ cpuName }, ram{ ramName }, videocard{ videoCardName }, mouse{ _mouse }, camera{ _camera }, printer{ _printer }
{
}

Notebook::Notebook(Notebook& obj)
{
	this->name = obj.name;
	this->cpu = obj.cpu;
	this->ram = obj.ram;
	this->videocard = obj.videocard;
	this->mouse = obj.mouse;
	this->camera = obj.camera;
	this->printer = obj.printer;
}



void Notebook::Print()
{
	cout << endl << "The name of notebook: " << this->name << endl;
	this->cpu.Print();
	this->ram.Print();
	this->videocard.Print();
	this->mouse->Print();
	this->camera->Print();
	this->printer->Print();
	cout  << "_____________________________________________________________________________________________________________" << endl;
}
