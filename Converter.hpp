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
	else
	{
		std::cout << "ERROR! not a recognized mass type";
	}

	return convMass;
}