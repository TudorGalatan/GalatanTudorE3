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
			std::cout << this->canvas[line][column] << ' ';
		std::cout << '\n';
	}
}


void Canvas::setPoint (unsigned short int horizontalCoordinate, unsigned short int verticalCoordinate, char character)
{
	this->canvas[verticalCoordinate][horizontalCoordinate] = character;
}


void Canvas::drawLine (unsigned short int x1, unsigned short int y1, unsigned short int x2, unsigned short int y2, char character)
{
	// Calculate the absolute difference for the horizontal and the vertical coordinates.
	short int horizontalDifference = abs((short int)x1 - x2);
	short int verticalDifference = abs((short int)y1 - y2);

	// Set the coordinates of the current point on the canvas.
	unsigned short int horizontalCoordinate = (x1 <= x2) ? x1 : x2;
	unsigned short int verticalCoordinate = (y1 <= y2) ? y1 : y2;

	// Calculate the decision.
	short int decision = 2 * horizontalDifference - verticalDifference;

	while (horizontalCoordinate <= ((x1 <= x2) ? x2 : x1))
	{
		// Set the current point on the canvas.
		this->setPoint(horizontalCoordinate, verticalCoordinate, character);

		horizontalCoordinate++;
		decision += 2 * verticalCoordinate;

		if (decision >= 0)
		{
			decision -= 2 * horizontalCoordinate;
			verticalCoordinate++;
		}
	}
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
	short int x = radius;
	short int y = 0;

	this->setPoint(x + horizontalCoordinate, y + verticalCoordinate, 'C');

	if (radius > 0)
	{
		this->setPoint(x + horizontalCoordinate, -y + verticalCoordinate, 'C');
		this->setPoint(y + horizontalCoordinate, x + verticalCoordinate, 'C');
		this->setPoint(-y + horizontalCoordinate, x + verticalCoordinate, 'C');
	}

	short int P = 1 - radius;

	while (x > y)
	{
		y++;

		if (P <= 0)
			P = P + 2 * y + 1;
		else
		{
			x--;
			P = P + 2 * y - 2 * x + 1;
		}

		if (x < y)
			break;

		this->setPoint(x + horizontalCoordinate, y + verticalCoordinate, 'C');
		this->setPoint(-x + horizontalCoordinate, y + verticalCoordinate, 'C');
		this->setPoint(x + horizontalCoordinate, -y + verticalCoordinate, 'C');
		this->setPoint(-x + horizontalCoordinate, -y + verticalCoordinate, 'C');

		if (x != y)
		{
			this->setPoint(y + horizontalCoordinate, x + verticalCoordinate, 'C');
			this->setPoint(-y + horizontalCoordinate, x + verticalCoordinate, 'C');
			this->setPoint(y + horizontalCoordinate, -x + verticalCoordinate, 'C');
			this->setPoint(-y + horizontalCoordinate, -x + verticalCoordinate, 'C');
		}
	}
}


void Canvas::fillCircle (unsigned short int horizontalCoordinate, unsigned short int verticalCoordinate, unsigned short int radius, char character)
{

}