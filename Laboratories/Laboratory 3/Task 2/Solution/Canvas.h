/*
	This is the interface for the Canvas module.
*/

#pragma once

#include <iostream>


class Canvas
{
    private:

        unsigned short int width, height;
        char canvas[10000][10000];

    public:

        /*
            This is the constructor of the class.
            Input:
                - "width": the width of the canvas
                - "height": the height of the canvas
            Output:
                - the canvas is being initialized
        */
        Canvas (unsigned short int width, unsigned short int height);

        /*
            Clears the canvas.
            Input:
                - none
            Output:
                - the canvas is being cleaned up
        */
        void clear();

        /*
            Prints the canvas on the screen.
            Input:
                - none
            Output:
                - the canvas is being printed on the screen
        */
        void print();

        /*
            Draws a rectangle on the canvas.
            Input:
                - "left": the left side of the rectangle
                - "top": the top side of the rectangle
                - "right": the right side of the rectangle
                - "bottom": the bottom side of the rectangle
                - "character": the character to be displayed on the canvas
            Output:
                - a rectangle is being drawn on the canvas
        */
        void drawRectangle (unsigned short int left, unsigned short int top, unsigned short int right, unsigned short int bottom, char character);

        /*
            Fills a rectangle on the canvas.
            Input:
                - "left": the left side of the rectangle
                - "top": the top side of the rectangle
                - "right": the right side of the rectangle
                - "bottom": the bottom side of the rectangle
                - "character": the character to be displayed on the canvas
            Output:
                - a rectangle is being drawn on the canvas
        */
        void fillRectangle (unsigned short int left, unsigned short int top, unsigned short int right, unsigned short int bottom, char character);

        /*
            Draws a circle on the canvas.
            Input:
                - "horizontalCoordinate": the horizontal coordinate of the center of the circle
                - "verticalCoordinate": the vertical coordinate of the center of the circle
                - "radius": the radius of the circle
                - "character": the character to be displayed on the canvas
            Output:
                - a circle is being drawn on the canvas
        */
        void drawCircle (unsigned short int horizontalCoordinate, unsigned short int verticalCoordinate, unsigned short int radius, char character);

        void FillCircle(int x, int y, int ray, char ch);
        void SetPoint(int x, int y, char ch);
        void DrawLine(int x1, int y1, int x2, int y2, char ch);
};