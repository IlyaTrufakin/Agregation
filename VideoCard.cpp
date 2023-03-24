#include "VideoCard.h"

VideoCard::VideoCard()
{
	this->name = "Default VideoCard model";
}

VideoCard::VideoCard(const string name)
{
	this->name = name;
}

void VideoCard::Print()
{
	cout << "VideoCard name: " << this->name << endl;
}
