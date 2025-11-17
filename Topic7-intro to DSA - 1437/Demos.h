#pragma once
#include <iostream>
#include <string>
#include<vector> 


void demoBasicsOfTheNEWoperator();

template<typename T> //allows printing a vector of arbitrary data type (int, char, Car, bool ,etc)
void printVector(const std::vector<T>& thangsAndStuff)
{
	for (const auto& thang : thangsAndStuff)
	{
		std::cout << thang << "\n";
	}
}

void giveReminderOfStdVector();