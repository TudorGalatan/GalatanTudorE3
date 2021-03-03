/*
	This is the interface for the Mathematics module.
*/

#pragma once


class Mathematics
{
    public:

        static int addNumbers (int, int);
        static int addNumbers (int, int, int);
        static double addNumbers (double, double);
        static double addNumbers (double, double, double);
        static int addNumbers (int count, ...);
        static char* addNumbers (const char*, const char*);
        static int multiplyNumbers (int, int);
        static int multiplyNumbers (int, int, int);
        static double multiplyNumbers (double, double);
        static double multiplyNumbers (double, double, double);
};