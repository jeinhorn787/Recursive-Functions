/***********************************************************************************************
** Name:  Lab5(Recursion)
** Author: Jeremy Einhorn
** Date: July 26, 2017
** Description: This is the implementation file for the recursive functions.
*************************************************************************************************/

#include"recursive.hpp"
#include<iostream>
using std::cout;
using std::getline;
using std::endl;

//the passed in string is stored in a temporary string inside the function
//the last letter of the temporary string is printed.  then the temporary
//string is resized to have 1 less element.  the new sized temp array
//is passed to the recursive call
int reverseString(string input)
{
	//temporary string
	string temp = input;

	//prints last letter of the string
	cout << temp[temp.size() - 1];

	//resize
	temp.resize(temp.size() - 1);

	//if the temp size is at 0, the function exits
	if (temp.size() < 1)
	{
		cout << "\\n" << endl;
		return;
	}

	//recursive call
	reverseString(temp);
}

//the last element is added to the resurive call which moves 1 element
//closer to the first element of the array
int sumArray(int* arry, int size)
{
	//if the size is at 0, 0 is returned to
	//the recursive call
	if (size == 0)
		return 0;
	
	return arry[size - 1] + sumArray(arry, size - 1);
}

//the input is added to the input - 1
int triangleNum(int input)
{
	//this is passed to the recursive call or to the original
	//call if the user enters 0
	if (input == 0)
		return 0;
	
	return input + triangleNum(input - 1);
}
