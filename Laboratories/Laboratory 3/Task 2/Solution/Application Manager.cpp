/*
	This is the starting point of the application.
*/

#include "Canvas.h"


void runExample ();


int main ()
{
	// Run the example on how to use the Canvas module.
	runExample();

	return 0;
}


void runExample ()
{
	// Create the canvas.
	unsigned short int width = 30;
	unsigned short int height = 20;
	Canvas canvas(width, height);

	// Print the empty canvas.
	canvas.print();

	// Set some points on the canvas.
	canvas.setPoint(2, 4, 'G');
	canvas.setPoint(3, 7, 'A');
	canvas.setPoint(1, 1, 'B');
	canvas.setPoint(4, 0, 'B');
	canvas.setPoint(1, 2, 'C');

	// Print the canvas.
	canvas.print();

	// Draw a rectangle on the canvas.
	canvas.drawRectangle(6, 0, 10, 3, 'U');

	// Print the canvas.
	canvas.print();

	// Fill a rectangle on the canvas.
	canvas.fillRectangle(12, 1, 20, 19, 'R');

	// Print the canvas.
	canvas.print();

	// Clear the canvas.
	canvas.clear();

	// Print the empty canvas.
	canvas.print();

	// Draw a circle on the canvas.
	canvas.drawCircle(7, 7, 5, 'O');

	// Print the canvas.
	canvas.print();
}