//Montana Newman
//CS 1410 Final Project
//April 21, 2015
//Final Project
//I did not copy anyone's code, except that which was provided. All code was designed and written by myself.
//If I'm found cheating, I realize I'll receive a 0.
//-----------------------------------------------------------------------

#include <string>
#include <iostream>
using namespace std;

class CarPart
{
public:
	//The default CarPart constructor
	//Purpose: creates a new CarPart object
	//Paramaters: none
	//Returns: none
	CarPart();
	
	//The paramaterized carPart constructor
	//Purpose: creates a new carPart object
	//Paramaters: the part num, part description as strings, and part price as double
	//Returns: none
	CarPart(const string&, const string&, double);

	//The getPartNum function
	//Purpose: gets the carPart
	//Paramaters: None
	//Returns: car part num as string 
	string getPartNum() const;

	//The getParDescrip function
	//Purpose: gets the partDescrip
	//Paramaters: None
	//Returns: car part description as string
	string getPartDescription() const;

	//The getPartPrice Function
	//Purpose: gets the carPart price
	//Paramaters: None
	//Returns: car part price as a double 
	double getPartPrice() const;
	
private:
	string partNum;
	string partDescrip;
	double partPrice;	
};

