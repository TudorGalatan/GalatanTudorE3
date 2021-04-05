/*
	This is the starting point of the application.
*/


/*
	Converts the given value from Fahrenheit degrees to Kelvin degrees.
	Input:
		- "value": the value of the temperature in degrees Fahrenheit
	Output:
		- the temperature in Kelvin
*/
float operator "" _Kelvin (const char* value);


/*
	Converts the given value from Kelvin degrees to Fahrenheit degrees.
	Input:
		- "value": the value of the temperature in degrees Kelvin
	Output:
		- the temperature in Fahrenheit
*/
float operator "" _Fahrenheit (const char* value);


int main ()
{
	float a = 300_Kelvin;
	float b = 120_Fahrenheit;

	return 0;
}


float operator "" _Kelvin (const char* value)
{
	float result = 0.0;
	return result;
}


float operator "" _Fahrenheit (const char* value)
{
	float result = 0.0;
	return result;
}