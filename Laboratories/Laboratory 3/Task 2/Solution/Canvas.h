/*
	This is the interface for the Canvas module.
*/

#pragma once

#include <iostream>
#include <cstdlib>


class Canvas
{
    private:

        // The size of the canvas
        unsigned short int width, height;

        // The canvas
        char canvas[100][100];

    public:

        /*
            This is the constructor of the class.
            Input:
                - "width": the width of the canvas
                - "height": the height of the canvas
            Output:
                - the canvas is being created
        */
        Canvas (unsigned short int width, unsigned short int height);

        /*
            Clears the canvas.
            Input:
                - none
            Output:
                - the canvas is being cleaned
        */
        void clear ();

        /*
            Prints the canvas on the screen.
            Input:
                - none
            Output:
                - the canvas is being printed on the screen
        */
        void print ();

        /*
            Sets a point on the canvas.
            Input:
                - "horizontalCoordinate": the horizontal coordinate of the point
                - "verticalCoordinate": the vertical coordinate of the point
                - "character": the character to be displayed on the canvas
            Output:
                - the point is being set on the canvas
        */
        void setPoint (unsigned short int horizontalCoordinate, unsigned short int verticalCoordinate, char character);

        /*
            Draws a line on the canvas using the Bresenham's line algorithm.
            Input:
                - "x1": the horizontal coordinate of one point on the line
                - "y1": the vertical coordinate of one point on the line
                - "x2": the horizontal coordinate of another point on the line
                - "y2": the vertical coordinate of another point on the line
                - "character": the character to be displayed on the canvas
            Output:
                - the line is being drawn on the canvas
        */
        void drawLine (unsigned short int x1, unsigned short int y1, unsigned short int x2, unsigned short int y2, char character);

        /*
            Draws an empty rectangle on the canvas.
            Input:
                - "left": the left side of the rectangle
                - "top": the top side of the rectangle
                - "right": the right side of the rectangle
                - "bottom": the bottom side of the rectangle
                - "character": the character to be displayed on the canvas
            Output:
                - the empty rectangle is being drawn on the canvas
        */
        void drawRectangle (unsigned short int left, unsigned short int top, unsigned short int right, unsigned short int bottom, char character);

        /*
            Draws a full rectangle on the canvas.
            Input:
                - "left": the left side of the rectangle
                - "top": the top side of the rectangle
                - "right": the right side of the rectangle
                - "bottom": the bottom side of the rectangle
                - "character": the character to be displayed on the canvas
            Output:
                - the full rectangle is being drawn on the canvas
        */
        void fillRectangle (unsigned short int left, unsigned short int top, unsigned short int right, unsigned short int bottom, char character);

        /*
            Draws a circle on the canvas using the midpoint circle algorithm.
            Input:
                - "horizontalCoordinate": the horizontal coordinate of the center of the circle
                - "verticalCoordinate": the vertical coordinate of the center of the circle
                - "radius": the radius of the circle
                - "character": the character to be displayed on the canvas
            Output:
                - a circle is being drawn on the canvas
        */
        void drawCircle (unsigned short int horizontalCoordinate, unsigned short int verticalCoordinate, unsigned short int radius, char character);

        /*
            Fills a circle on the canvas using the midpoint circle algorithm.
            Input:
                - "horizontalCoordinate": the horizontal coordinate of the center of the circle
                - "verticalCoordinate": the vertical coordinate of the center of the circle
                - "radius": the radius of the circle
                - "character": the character to be displayed on the canvas
            Output:
                - a disc is being drawn on the canvas
        */
        void fillCircle (unsigned short int horizontalCoordinate, unsigned short int verticalCoordinate, unsigned short int radius, char character);
};