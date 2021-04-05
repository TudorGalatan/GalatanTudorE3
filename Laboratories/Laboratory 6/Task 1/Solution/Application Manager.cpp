/*
	This is the starting point of the application.
*/

#include "Circuit.h"
#include "Weather.h"
#include "Dacia.h"


int main ()
{
	// Create the circuit.
	Circuit circuit;

	// Set the length of the circuit.
	circuit.setLength(100);

	// Set the weather condition for the circuit.
	circuit.setWeather(Weather::rainy);

	// Add a new Dacia car.
		// To add.

	return 0;
}