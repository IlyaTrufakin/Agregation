#include <iostream>
#include "Notebook.h"

//������� ����� �������.�� ������ ������ �������� ����� ��� : ���������, ���, �����, ������, �������, ����������, � �.�.
//������ ������ ����������� ��������� �������. ������� ������� ��������� ��������� � ����������.

int main()
{
	Camera myCamera("MyCamera N1");
	Mouse myMouse("MyMouse N1");
	Printer myPrinter("MyPrinter N1");
	cout << endl << "_____________________________________________________________________________________________________________" << endl;


	//�� ������� ��� ���� � ������������� �� ���������, ���� ������� ��������� ��� �� �������, ��������� �� ������ �� �������
//	Notebook NotebookN1;
//	cout << endl << "Default configuration: " << endl;
//	NotebookN1.Print();

	cout << endl << "Reference configuration: " << endl;
	Notebook NotebookN1("Notebook N1", "CPU N1", "RAM N1", "Videocard N1", &myMouse, &myCamera, &myPrinter);
	NotebookN1.Print();

	cout << endl << "Copy configuration: " << endl;
	Notebook NotebookN2(NotebookN1);
	NotebookN2.Print();


}
