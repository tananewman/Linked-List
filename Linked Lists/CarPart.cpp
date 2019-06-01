//Montana Newman
//CS 1410 Final Project
//April 21, 2015
//Final Project
//I did not copy anyone's code except that which was provided. All code was designed and written by myself.
//If I'm found cheating, I realize I'll receive a 0.
//-----------------------------------------------------------------------

#include "CarPart.h"

CarPart::CarPart()
{
	partNum = "None";
	partDescrip = "None";
	partPrice = 0.0;
}

CarPart::CarPart(const string& _partNum, const string& _partDescription, double _partPrice)
{
	partNum = _partNum;
	partDescrip = _partDescription;
	partPrice = _partPrice;
}

string CarPart::getPartNum() const 
{
	return partNum;
}

string CarPart::getPartDescription() const
{
	return partDescrip;
}

double CarPart::getPartPrice() const
{
	return partPrice;
}

