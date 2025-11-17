#include "Demos.h"

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

void giveReminderOfStdVector()
{
    std::vector<std::string> names =
    {
        "Alice",
        "Bob"
    };

    names.push_back("Darth"); 
    names.push_back("Carol"); //intentionally out of alphabetical order here 
    names.push_back("Eve");

    printVector(names);

    
}
