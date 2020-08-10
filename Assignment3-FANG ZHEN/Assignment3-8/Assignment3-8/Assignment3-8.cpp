// Assignment3-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>



int FIbunacciNth(int position)
{
	int firstnumber=0,secondnumber=1,n=2,number;
	if (position == 1)
	{
		return 0;
	}
	else if (position == 2)
	{
		return 1;
	}
	else
	{
		while (n != position)
		{
			number = firstnumber + secondnumber;
			n++;
			firstnumber = secondnumber;
			secondnumber = number;
			
		}

		return	number;
	}
}
int main()
{
	int input, result;
	printf("Enter the placement of the number you want in the Fibunacci Sequence: ");
	scanf_s("%d", &input);
	result = FIbunacciNth(input);
	printf("The number on that position of the Fibunacci Sequence is %d", result);

}

