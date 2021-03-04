/*
	This is the implementation for the Canvas module.
*/

#include "Canvas.h"


Canvas::Canvas (unsigned short int width, unsigned short int height)
{
	// Set the width of the canvas.
	if (width <= 100)
		this->width = width;
	else
		this->width = 100;

	// Set the height of the canvas.
	if (height <= 100)
		this->height = height;
	else
		this->height = 100;

	// Initialize the canvas.
	for (unsigned short int line = 0; line < height; line++)
		for (unsigned short int column = 0; column < width; column++)
			this->canvas[line][column] = ' ';
}


void Canvas::clear ()
{
	for (unsigned short int line = 0; line < this->height; line++)
		for (unsigned short int column = 0; column < this->width; column++)
			this->canvas[line][column] = ' ';
}


void Canvas::print ()
{
	for (unsigned short int line = 0; line < this->height; line++)
	{
		for (unsigned short int column = 0; column < this->width; column++)
			std::cout << this->canvas[line][column];
		std::cout << '\n';
	}
}


void Canvas::setPoint (unsigned short int horizontalCoordinate, unsigned short int verticalCoordinate, char character)
{
	this->canvas[verticalCoordinate][horizontalCoordinate] = character;
}


void Canvas::drawLine (unsigned short int x1, unsigned short int y1, unsigned short int x2, unsigned short int y2, char character)
{

}


void Canvas::drawRectangle (unsigned short int left, unsigned short int top, unsigned short int right, unsigned short int bottom, char character)
{
	for (unsigned short int line = top; line <= bottom; line++)
		this->canvas[line][left] = this->canvas[line][right] = character;

	for (unsigned short int column = left + 1; column < right; column++)
		this->canvas[top][column] = this->canvas[bottom][column] = character;
}


void Canvas::fillRectangle (unsigned short int left, unsigned short int top, unsigned short int right, unsigned short int bottom, char character)
{
	for (unsigned short int line = top; line <= bottom; line++)
		for (unsigned short int column = left; column <= right; column++)
			this->canvas[line][column] = character;
}


void Canvas::drawCircle (unsigned short int horizontalCoordinate, unsigned short int verticalCoordinate, unsigned short int radius, char character)
{

}


void Canvas::fillCircle (unsigned short int horizontalCoordinate, unsigned short int verticalCoordinate, unsigned short int radius, char character)
{

}