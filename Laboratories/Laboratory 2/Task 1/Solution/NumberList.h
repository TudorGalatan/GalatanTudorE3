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
            Inserts a new number into the list of numbers on a given position.
            Input:
                - "position": the position where to insert the new number
                - "newNumber": the new number to be added to the list of numbers
            Output:
                - true, if the number was successfully inserted to the list of numbers
                - false, otherwise
        */
        bool insertNumberOnPosition (unsigned short int position, int newNumber);

        /*
            Removes all the occurrences of the given number from the list of numbers.
            Input:
                - "number": the number to be removed from the list of numbers
            Output:
                - all the occurrences of the given number are removed from the list of
                  numbers
        */
        void removeNumber (int number);

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