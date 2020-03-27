#include <iostream>
#include <memory>
#include <stdlib.h>
#include <utility>

#include "tests.hpp"

int choose()
{
    int chs;
    std::cout << "1 to QuickSort\n2 to MergeSort\n3 to IntroSort\n";
    std::cin >> chs;
    return chs;
}

int main()
{

    test_quick_sort();

    test_merge_sort();

    test_intro_sort();
}
