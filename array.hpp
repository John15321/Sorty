#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <math.h>
#include <algorithm>

#include "tests.hpp"

////////////////////DECLARATION QUICK INCLUDED IN SORT.HPP/////////////
template <typename Var>
void quick_sort(Var *array, int start_index, int end_index);
///////////////////////////////////////////////////////////////////////

template <typename Var>
void display_array(Var *array, int size_of_array)
{
    for (int i = 0; i < size_of_array; i++)
    {
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;
}

template <typename Var>
void swap(Var &first, Var &second)
{
    Var temp = first;
    first = second;
    second = temp;
}

template <typename Var>
void reverse_array(Var *array, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int tmp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = tmp;
    }
}

//FUNCTION TO MERGE 2 ARRAYS INTO ONE//
template <typename Var>
void merge_arrays(Var *main_array, Var *left_array, Var *right_array, int left_array_size, int right_array_size)
{

    int i = 0, j = 0, k = 0;
    while (i < left_array_size)
    {
        main_array[k] = left_array[i];
        i++;
        k++;
    }

    while (j < right_array_size)
    {
        main_array[k] = right_array[j];
        j++;
        k++;
    }
}

template <typename Var>
void percentage_sort(Var *array, int first_index, int last_index, double percentage)
{

    while (percentage < 0 || percentage > 100 || std::cin.fail())
    {
        std::cout << "Percentage is too low! One more time:" << std::endl;

        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cin >> percentage;
    }

    int split_index = (last_index + 1) * percentage / 100;

    Var *array_to_sort = new Var[split_index];                      // left array - to sort
    Var *array_not_to_sort = new Var[last_index - split_index + 1]; // right array - tmp

    int i = 0, j = 0;
    while (i < split_index)
    {
        array_to_sort[i] = array[i];
        i++;
    }

    while (i <= last_index)
    {
        array_not_to_sort[j] = array[i];
        i++;
        j++;
    }

    quick_sort(array_to_sort, 0, split_index - 1);

    merge_arrays(array, array_to_sort, array_not_to_sort, split_index, last_index - split_index + 1);
}

#endif // ARRAY_HPP
