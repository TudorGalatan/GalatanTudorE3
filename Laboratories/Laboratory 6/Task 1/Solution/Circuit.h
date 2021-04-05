/*
	This is the interface for the Circuit module.
*/

#pragma once

#include "Weather.h"
#include "Car.h"

#include <vector>


class Circuit
{
	private:

		unsigned short int length;
		unsigned short int weather;
		std::vector < Car > cars;

	public:

		/*
			Sets the length of the circuit.
			Input:
				- "length": the length of the circuit
			Output:
				- the length of the circuit is being set
		*/
		void setLength (unsigned short int length);

		/*
			Sets the weather condition for the circuit.
			Input:
				- "weather": the weather condition for the circuit
			Output:
				- the weather condition for the circuit is being set
		*/
		void setWeather (Weather weather);

		/*
			Adds a new car to the array of cars.
			Input:
				- "car": the car to be added to the array of cars
			Output:
				- the car is being added to the array of cars
		*/
		void addCar (Car car);
};