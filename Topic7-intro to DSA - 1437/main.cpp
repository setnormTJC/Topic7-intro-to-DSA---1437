// Topic7-intro to DSA - 1437.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 
#include<vector> //we are going to "reinvent this wheel" with our OWN implementation

#include"Demos.h"
#include"DynamicCharacterArray.h" //This is basically a "string" class 

int main()
{
	//giveReminderOfStdVector(); 

	RawDynamicCharacterArray rawDynamicCharacterArray;

	rawDynamicCharacterArray.pushBack('a');
	rawDynamicCharacterArray.pushBack('b');
	rawDynamicCharacterArray.pushBack('c');
	rawDynamicCharacterArray.pushBack('d');
	rawDynamicCharacterArray.pushBack('e');

	rawDynamicCharacterArray.pushBack('f'); //how is THIS going to work? 


}
