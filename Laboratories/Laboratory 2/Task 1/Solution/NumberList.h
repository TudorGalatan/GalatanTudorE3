/*
	This is the interface for the NumberList data structure.
*/

#pragma once

#include <iostream>


class NumberList
{
    private:

        int numbers[10];
        unsigned short int numberOfNumbers;

    public:

        /*
            Initializes the instance of the class.
            Input:
                - none
            Output:
                - the instance of the class is being initialized
        */
        void initialize ();

        /*
            Adds a new number to the list of numbers.
            Input:
                - "newNumber": the new number to be added to the list of numbers
            Output:
                - true, if the number was successfully added to the list of numbers
                - false, otherwise
        */
        bool addNumber (int newNumber);

        /*
            It sorts all the numbers in the list of numbers in ascending order using
            the Bubble Sort algorithm.
            Input:
                - none
            Output:
                - the list of numbers is being sorted
        */
        void sort ();

        /*
            Prints the list of numbers on the screen.
            Input:
                - none
            Output:
                - the list of numbers is being printed on the screen
        */
        void printList ();
};