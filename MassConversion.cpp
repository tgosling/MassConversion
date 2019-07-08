// MassConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Converter.hpp"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Variables
	pair<double, string> usrMass;
	pair<double, string> convMass;
	string contConv = "y";

	cout << "\tMass Conversion Application" << endl;
	cout << "\t---------------------------" << endl;
	while (contConv == "y") {
		//prompt for user info
		cout << "\nEnter mass and mass type: ";
		cin >> usrMass.first >> usrMass.second;
		cout << "\n-------------------------" << endl;
		convMass = convertMass(usrMass);
		cout << "\nUser Mass: " << usrMass.first << " " << usrMass.second << endl;
		cout << "Converted Mass: " << convMass.first << " " << convMass.second << endl;
		cout << "\nConvert another value? (y/n)";
		cin >> contConv;
		
		if (contConv == "n")
			break;
	}
} 


