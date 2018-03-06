/***********************************************************************************************
** Name:  Lab5(Recursion)
** Author: Jeremy Einhorn
** Date: July 26, 2017
** Description: This is the main file.  A menu first pops where where the user can choose any
of the 3 functions or can quit the program.
*************************************************************************************************/

#include"recursive.hpp"
#include"menu.hpp"
#include"input_validation.hpp"
#include<iostream>
using std::cout;
using std::cin;
using std::getline;
using std::endl;


int main()
{
	//holds menu choice
	int choice = menu();

	//while the user does choose to quit
	while (choice != 4)
	{
		//if reverse string is chosen
		if (choice == 1)
		{
			//string for user input
			string input;

			cout << "Please enter a string." << endl;
			getline(cin, input);

			cout << "The reverse of that is:" << endl;
			reverseString(input);
		}

		//if sum array is chosen
		if (choice == 2)
		{
			//ints for the size of the array the user enters
			//and nums for the numbers the user wants to put in the array
			int size, nums;

			cout << "Please enter a positive integer from 0 to 10 for the array size." << endl;
			//input validation for a positive integer
			size = getUnsignedInt();

			//if the user enters higher than 10, the user must re-enter
			while (size > 10)
			{
				cout << "Error.  Please do not exceed 10." << endl;
				size = getUnsignedInt();
			}

			//dynamic allocation of a new integer array
			int *arry = new int[size];

			cout << "Please enter the integers for the array." << endl;

			//fill the array with user entered integers
			for (int index = 0; index < size; index++)
			{
				//input validation for either a positive or
				//negative integer
				nums = getInt();

				arry[index] = nums;
			}

			cout << "The sum of the array is: " << sumArray(arry, size) << endl;

			//frees the memory back to the heap
			//arry points to nothing 
			delete[] arry;
			arry = nullptr;
		}

		//if triangle number chosen
		if (choice == 3)
		{
			//int for user input
			int input;

			cout << "Please enter a positive integer from 0 to 100 for the number"
				" to be calcuated." << endl;
			//input validation for a positive integer
			input = getUnsignedInt();

			//if the user enters higher than 100, they must re-enter
			while (input > 100)
			{
				cout << "Error. Please do not exceed 100." << endl;

				input = getUnsignedInt();
			}

			cout << "The triangular number is: " << triangleNum(input) << endl;
		}

		//the user chooses from the menu again
		choice = menu();
	}
	
	//if the user chooses to quit
	return 0;
}