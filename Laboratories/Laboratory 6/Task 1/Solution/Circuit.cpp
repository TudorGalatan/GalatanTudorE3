/*
	This is the implementation for the Circuit module.
*/

#include "Circuit.h"


void Circuit::setLength (unsigned short int length)
{
	this->length = length;
}


void Circuit::setWeather (Weather weather)
{
	this->weather = weather;
}


void Circuit::addCar (Car car)
{
	this->cars.push_back(car);
}