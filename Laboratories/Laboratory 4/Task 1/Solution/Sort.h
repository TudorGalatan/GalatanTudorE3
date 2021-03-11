/*
	This is the interface for the Sort module.
*/

#pragma once

#include <iostream>
#include <cstdlib>
#include <cstdarg>
#include <string>
#include <sstream>


class Sort
{
    private:

        unsigned int numberOfElements;
        int elements[1000];

    public:

        /*
            This is the default constructor. It initializes the list of
            numbers. In this case the list contains zero elements.
            Input:
                - none
            Output:
                - the class instance is being initialized
        */
        Sort ();

        /*
            This is the default constructor. It initializes the list of
            numbers. In this case the list contains zero elements.
            Input:
                - none
            Output:
                - the class instance is being initialized
        */
        Sort (unsigned short int numberOfElements, int minimumValue, int maximumValue);

        /*
            This is the default constructor. It initializes the list of
            numbers. In this case the list contains zero elements.
            Input:
                - none
            Output:
                - the class instance is being initialized
        */
        Sort (unsigned short int numberOfElements, int elements[]);

        /*
            This is the default constructor. It initializes the list of
            numbers. In this case the list contains zero elements.
            Input:
                - none
            Output:
                - the class instance is being initialized
        */
        Sort (unsigned short int numberOfElements, ...);

        /*
            This is the default constructor. It initializes the list of
            numbers. In this case the list contains zero elements.
            Input:
                - none
            Output:
                - the class instance is being initialized
        */
        Sort (std::string string);

        /*
            It prints the list of numbers on the screen.
            Input:
                - none
            Output:
                - the list of numbers is being printed on the screen
        */
        void print ();

        /*
            Gets the number of elements from the list of numbers.
            Input:
                - none
            Output:
                - the number of elements in the list of numbers
        */
        const unsigned short int& getNumberOfElements () const;

        /*
            Gets the element in the list of numbers situated on the given position.
            Input:
                - "index": the position where the element to be returned is situated on
            Output:
                - the element from the list of numbers situated on the given position
        */
        unsigned short int getElementFromIndex (unsigned short int index);

        /*
            Sorts the list of numbers in ascending or descending order using the Bubble
            Sort algorithm.
            Input:
                - "ascendingOrder": the order to be used for sorting (ascending or
                  descending) - the default order is ascending
            Output:
                - the list of numbers is being sorted in the given order
        */
        void bubbleSort (bool ascendingOrder = true);

        /*
            Sorts the list of numbers in ascending or descending order using the Insert
            Sort algorithm.
            Input:
                - "ascendingOrder": the order to be used for sorting (ascending or
                  descending) - the default order is ascending
            Output:
                - the list of numbers is being sorted in the given order
        */
        void insertSort (bool ascendingOrder = true);

        /*
            Sorts the list of numbers in ascending or descending order using the Quicksort
            algorithm.
            Input:
                - "ascendingOrder": the order to be used for sorting (ascending or
                  descending) - the default order is ascending
            Output:
                - the list of numbers is being sorted in the given order
        */
        void quicksort (bool ascendingOrder = true);

        void mergeLists (Sort& sortList);

    private:

        /*
            Sorts the list of numbers in ascending or descending order using the Quicksort
            algorithm.
            Input:
                - "startIndex": the start index of the current segment
                - "endIndex": the end index of the current segment
            Output:
                - the list of numbers is being sorted
        */
        void quicksortHelpFunction (unsigned short int startIndex, unsigned short int endIndex);

        /*
            Creates a partition for the Quicksort algorithm.
            Input:
                - "startIndex": the start index of the current segment
                - "endIndex": the end index of the current segment
            Output:
                - the index of the partition
        */
        unsigned short int quicksortPartition (unsigned short int startIndex, unsigned short int endIndex);
};