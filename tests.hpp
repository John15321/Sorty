#pragma once
#ifndef TESTS_HPP
#define TESTS_HPP

#include <iostream>
#include <math.h>
#include <algorithm>

#include "array.hpp"
#include "timer.hpp"
#include "sort.hpp"

#define NUMBER_OF_ARRAYS 100


void test_quick_sort()
{
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~QUICK SORT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    Timer timer_of_all_sortings;
    std::cout << "Array Size: ";
    int size;
    std::cin >> size;
    std::cout << std::endl;

    //////////////////////MAKES 100 arrays////////////////////////////////
    int **array_of_arrays = new int *[NUMBER_OF_ARRAYS];
    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        array_of_arrays[i] = new int[size];
    }

    ////////////////////FILL EVERY ARRAY WITH RAND////////////////////////
    srand(time(NULL));
    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array_of_arrays[i][j] = rand() % 100000;
        }
    }

    std::cout << "Sort percentage: ";
    double percentage = 0.0;
    std::cin >> percentage;
    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        percentage_sort(array_of_arrays[i], 0, size - 1, percentage);
    }
    std::cout << std::endl;

    int are_reversed = 0;
    std::cout << "Arrays in normal - random order                - 0" << std::endl;
    std::cout << "Arrays earlier sotred and then reversed        - 1" << std::endl;
    std::cin >> are_reversed;

    if (are_reversed == 1)
    {
        std::cout << "Program is sorting and then reversing arrays. Wait!" << std::endl;
        for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
        {
            quick_sort(array_of_arrays[i], 0, size - 1);
            reverse_array(array_of_arrays[i], size);
        }
    }
    /////////////////////////////////////////////////////////////////////

    /////////////////////////SORTING!!!//////////////////////////////////
    std::cout << "PROGRAM STARED SORTING ARRAYS. WAIT!" << std::endl;

    timer_of_all_sortings.start(); // START TIMER OF 100 SORTS

    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        quick_sort(array_of_arrays[i], 0, size - 1);
    }

    timer_of_all_sortings.stop(); // STOP TIMER OF 100 SORTS
    timer_of_all_sortings.print_time_duration();
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    /////////////////////////////DELETING ARRAYS/////////////////////////

    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        delete[] array_of_arrays[i];
    }

    delete[] array_of_arrays;
}

void test_merge_sort()
{
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~MERGE SORT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    Timer timer_of_all_sortings;
    std::cout << "Array Size: ";
    int size;
    std::cin >> size;
    std::cout << std::endl;

    //////////////////////MAKES 100 arrays////////////////////////////////
    int **array_of_arrays = new int *[NUMBER_OF_ARRAYS];
    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        array_of_arrays[i] = new int[size];
    }

    ////////////////////FILL EVERY ARRAY WITH RAND////////////////////////
    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array_of_arrays[i][j] = rand() % 100000;
        }
    }

    std::cout << "Sort percentage: ";
    double percentage = 0.0;
    std::cin >> percentage;
    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        percentage_sort(array_of_arrays[i], 0, size - 1, percentage);
    }

    std::cout << std::endl;

    int are_reversed = 0;
    std::cout << "Arrays in normal - random order                - 0" << std::endl;
    std::cout << "Arrays earlier sotred and then reversed        - 1" << std::endl;
    std::cin >> are_reversed;

    if (are_reversed == 1)
    {

        for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
        {
            quick_sort(array_of_arrays[i], 0, size - 1);
            reverse_array(array_of_arrays[i], size);
        }
    }

    /////////////////////////////////////////////////////////////////////
    /////////////////////////SORTING!!!//////////////////////////////////
    std::cout << "PROGRAM STARED SORTING ARRAYS. WAIT!" << std::endl;
    timer_of_all_sortings.start(); // START TIMER OF 100 SORTS

    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        merge_sort(array_of_arrays[i], 0, size - 1);
    }

    timer_of_all_sortings.stop(); // STOP TIMER OF 100 SORTS
    timer_of_all_sortings.print_time_duration();
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    /////////////////////////////DELETING ARRAYS/////////////////////////

    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        delete[] array_of_arrays[i];
    }

    delete[] array_of_arrays;
}

void test_intro_sort()
{
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~INTRO SORT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    Timer timer_of_all_sortings;
    std::cout << "Array Size: ";
    int size;
    std::cin >> size;
    std::cout << std::endl;

    //////////////////////MAKES 100 arrays////////////////////////////////
    int **array_of_arrays = new int *[NUMBER_OF_ARRAYS];
    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        array_of_arrays[i] = new int[size];
    }

    ////////////////////FILL EVERY ARRAY WITH RAND////////////////////////
    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array_of_arrays[i][j] = rand() % 100000;
        }
    }

    std::cout << "Sort percentage: ";
    double percentage = 0.0;
    std::cin >> percentage;
    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        percentage_sort(array_of_arrays[i], 0, size - 1, percentage);
    }
    std::cout << std::endl;
    int are_reversed = 0;
    std::cout << "Arrays in normal - random order                - 0" << std::endl;
    std::cout << "Arrays earlier sotred and then reversed        - 1" << std::endl;
    std::cin >> are_reversed;

    if (are_reversed == 1)
    {

        for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
        {
            quick_sort(array_of_arrays[i], 0, size - 1);
            reverse_array(array_of_arrays[i], size);
        }
    }
    /////////////////////////////////////////////////////////////////////
    /////////////////////////SORTING!!!//////////////////////////////////
    std::cout << "PROGRAM STARED SORTING ARRAYS. WAIT!" << std::endl;
    timer_of_all_sortings.start(); // START TIMER OF 100 SORTS

    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        intro_sort(array_of_arrays[i], size);
    }

    timer_of_all_sortings.stop(); // STOP TIMER OF 100 SORTS
    timer_of_all_sortings.print_time_duration();
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    /////////////////////////////DELETING ARRAYS/////////////////////////

    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        delete[] array_of_arrays[i];
    }

    delete[] array_of_arrays;
}

#endif // TESTS_HPP
