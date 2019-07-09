#pragma once
#include <string>
#include <tuple>
#include <iostream>

using namespace std;


/* Method Name: convertMass
	   Purpose: convert mass from imperial to metric and vice cersa
	   Accepts: std::pair<double, string>
	   Returns:	std::pair<double, string>		*/
pair<double, string> convertMass(pair<double, string> usrMass)
{
	pair<double, string> convMass;

	if (usrMass.second == "grams" || usrMass.second == "g")
	{
		convMass.first = usrMass.first * 0.035724;
		convMass.second = "oz";
	}
	else if (usrMass.second == "oz" || usrMass.second == "ounces")
	{
		convMass.first = usrMass.first * 28.3495;
		convMass.second = "grams";
	}
	else if (usrMass.second == "lb" || usrMass.second == "pounds")
	{
		convMass.first = usrMass.first * 0.453592;
		convMass.second = "kg";
	}
	else if (usrMass.second == "kg" || usrMass.second == "kilograms")
	{
		convMass.first = usrMass.first * 2.20462;
		convMass.second = "lb";
	}
	else if (usrMass.second == "gr" || usrMass.second == "grain")
	{
		convMass.first = usrMass.first * 0.0416667;
		convMass.second = "dwt";
	}
	else if (usrMass.second == "dwt" || usrMass.second == "pennyweight")
	{
		convMass.first = usrMass.first * 24;
		convMass.second = "gr";
	}
	else
	{
		std::cout << "ERROR! not a recognized mass type";
		convMass.first = 0;
		convMass.second = "Error";
		return convMass;
	}

	return convMass;
}