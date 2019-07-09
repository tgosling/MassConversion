// MassConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Converter.hpp"

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Variables
	pair<double, string> usrMass;
	pair<double, string> convMass;
	char contConv = 'y';
	double dblInput;
	string strInput;

	cout << "\tMass Conversion Application" << endl;
	cout << "\t---------------------------" << endl;
	while (contConv == 'y') {
		//prompt for user info
		cout << "\nEnter mass and mass type: ";
		do {
			if (cin >> dblInput) {
				break;
			}
			else {
				cout << "enter a number in digits or larger than 0" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		} while (cin.fail() || dblInput == 0);
		getline(cin, strInput);
		//Clean up mass/type user input
		strInput = UsrInputHndlr(strInput);
		//assign to pair
		usrMass.first = dblInput;
		usrMass.second = strInput;
		//convert data
		cout << "\n-------------------------" << endl;
		convMass = convertMass(usrMass);
		//display conversion
		cout << "\nUser Mass: " << usrMass.first << " " << usrMass.second << endl;
		cout << "Converted Mass: " << convMass.first << " " << convMass.second << endl;
		cout << "\nConvert another value? (y/n)";
		cin >> contConv;
		
		if (contConv == 'n')
			break;
	}
} 


