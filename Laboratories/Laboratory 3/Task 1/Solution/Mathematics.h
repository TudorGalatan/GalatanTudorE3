/*
	This is the interface for the Mathematics module.
*/

#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdarg.h>
#include <string.h>


class Mathematics
{
    public:

        /*
            Adds two numbers of type integer.
            Input:
                - two integer numbers
            Output:
                - an integer value representing the sum of the
                  two numbers
        */
        static int add (int, int);

        /*
            Adds three numbers of type integer.
            Input:
                - three integer numbers
            Output:
                - an integer value representing the sum of the
                  three numbers
        */
        static int add (int, int, int);

        /*
            Adds two numbers of type double.
            Input:
                - two double numbers
            Output:
                - a double value representing the sum of the
                  two numbers
        */
        static double add (double, double);

        /*
            Adds three numbers of type double.
            Input:
                - three double numbers
            Output:
                - a double value representing the sum of the
                  three numbers
        */
        static double add (double, double, double);

        /*
            Adds up a list of integer numbers.
            Input:
                - an unsigned integer number representing the
                  number of numbers in the list
                - a list of integer numbers
            Output:
                - an integer value representing the sum of the
                  list of numbers
        */
        static int add (unsigned int, ...);

        /*
            Concatenates two strings together.
            Input:
                - two strings
            Output:
                - nullptr, if any of the two strings is nullptr
                - the concatenation of the two strings, otherwise
        */
        static char* add (const char*, const char*);

        /*
            Multiplies two numbers of type integer.
            Input:
                - two integer numbers
            Output:
                - an integer value representing the multiplication
                  of the two numbers
        */
        static int multiply (int, int);

        /*
            Multiplies three numbers of type integer.
            Input:
                - three integer numbers
            Output:
                - an integer value representing the multiplication
                  of the three numbers
        */
        static int multiply (int, int, int);

        /*
            Multiplies two numbers of type double.
            Input:
                - two double numbers
            Output:
                - a double value representing the multiplication
                  of the two numbers
        */
        static double multiply (double, double);

        /*
            Multiplies three numbers of type double.
            Input:
                - three double numbers
            Output:
                - a double value representing the multiplication
                  of the three numbers
        */
        static double multiply (double, double, double);
};