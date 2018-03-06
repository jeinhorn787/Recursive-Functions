/***********************************************************************************************
** Name:  Lab5(Recursion)
** Author: Jeremy Einhorn
** Date: July 26, 2017
** Description: This is the header file for my menu.  It has 4 options to select one of the 3
functions and an option to end the program.
*************************************************************************************************/

#include"menu.hpp"
#include"input_validation.hpp"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int menu()
{
	int choice;

	cout << "		Functions Menu" << endl;
	cout << "1: Reverse a String" << endl;
	cout << "2: Sum an Array of Integers" << endl;
	cout << "3: Calculate Triangular Number" << endl;
	cout << "4: Quit" << endl;

	cout << "Please enter a number, from 1 to 4, for you choice." << endl;
	//input validation for a positive integer
	choice = getUnsignedInt();

	//if the user enters lower than 1 or higher than 4
	while (choice < 1 || choice > 4)
	{
		cout << "Error. Please enter 1 to 4 only." << endl;

		choice = getUnsignedInt();
	}

	
	switch (choice)
	{
	case 1:
		return 1;

	case 2:
		return 2;

	case 3:
		return 3;

	case 4:
		return 4;

	}
}