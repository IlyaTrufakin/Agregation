#pragma once
#include <string>
#include<iostream>
using namespace std;

class VideoCard
{
	string name;
public:
	VideoCard();
	VideoCard(const string name);
	VideoCard(VideoCard& obj) { this->name = obj.name; }
	void Print();
	~VideoCard() { cout << "\tVideoCard destructor - " << this;
	}
};

