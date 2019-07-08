// MassConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Variables
	double usrMass = 0;
	double convMass = 0;
	string usrMassType = "";

	cout << "\tMass Conversion Application" << endl;
	cout << "\t---------------------------" << endl;

	//prompt for user info
	cout << "\nEnter mass type: ";
	cin >> usrMassType;
	cout << "\nEnter mass: ";
	cin >> usrMass;

	cout << "Entered Mass: " << usrMass << " " << usrMassType << endl;
} 


