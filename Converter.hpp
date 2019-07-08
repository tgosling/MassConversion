#pragma once
#include <string>
#include <tuple>
#include <iostream>

using namespace std;


/* Method Name: MassConverter
	   Purpose: convert mass from imperial to metric and vice cersa
	   Accepts: double mass, string massType
	   Returns:	std::pair		*/
pair<double, string> convertMass(pair<double, string> usrMass)
{
	pair<double, string> convMass;

	if (usrMass.second == "grams")
	{
		convMass.first = usrMass.first * 0.035724;
		convMass.second = "oz";
	}
	else if (usrMass.second == "oz")
	{
		convMass.first = usrMass.first * 28.3495;
		convMass.second = "grams";
	}
	else if (usrMass.second == "lb")
	{
		convMass.first = usrMass.first * 0.453592;
		convMass.second = "kg";
	}
	else if (usrMass.second == "kg")
	{
		convMass.first = usrMass.first * 2.20462;
		convMass.second = "lb";
	}
	else
	{
		std::cout << "ERROR! not a recognized mass type";
	}

	return convMass;
}