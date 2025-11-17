#pragma once
#include <iostream>
#include <string>


void demoBasicsOfTheNEWoperator()
{
    int numberOfElementsDesired{};

    std::cout << "Enter the number of array elements (things on your grocery list) that you want:\n";
    std::cin >> numberOfElementsDesired;

    std::string* groceryListItems = new std::string[numberOfElementsDesired]; //heap-allocated memory

    std::string currentItem;
    for (int i = 0; i < numberOfElementsDesired; ++i)
    {
        std::getline(std::cin, currentItem);
        groceryListItems[i] = currentItem;
    }

    std::cout << "Your grocery list contains:\n";
    for (int i = 0; i < numberOfElementsDesired; ++i)
    {
        std::cout << groceryListItems[i] << "\n";
    }
}