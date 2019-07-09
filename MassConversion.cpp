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
	string contConv = "y";
	double dblInput;
	string strInput;

	cout << "\tMass Conversion Application" << endl;
	cout << "\t---------------------------" << endl;
	while (contConv == "y") {
		//prompt for user info
		cout << "\nEnter mass and mass type: ";
		//cin >> dblInput >> strInput;
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
		/*while (1) {
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "enter a number in digits" << endl;
				cin >> dblInput;
			}
			if (!cin.fail())
				break;
		}*/
		cin >> strInput;
		strInput.erase(remove_if(strInput.begin(), strInput.end(), ::isspace), strInput.end());
		usrMass.first = dblInput;
		usrMass.second = strInput;
		//Clean up mass/type user input
		usrMass.second.erase(remove_if(usrMass.second.begin(), usrMass.second.end(), ::isspace), usrMass.second.end());
		transform(usrMass.second.begin(), usrMass.second.end(), usrMass.second.begin(), ::tolower);
		cout << "\n-------------------------" << endl;
		//convert data
		convMass = convertMass(usrMass);
		//display conversion
		cout << "\nUser Mass: " << usrMass.first << " " << usrMass.second << endl;
		cout << "Converted Mass: " << convMass.first << " " << convMass.second << endl;
		cout << "\nConvert another value? (y/n)";
		cin >> contConv;
		
		if (contConv == "n")
			break;
	}
} 


