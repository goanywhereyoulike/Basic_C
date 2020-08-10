// Assignment4-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


void ToUpperCase(char Set[])
{
	
	for (int i = 0; i < 20; i++)
	{
		if (Set[i] <= 122 && Set[i] >= 97)
		{
			Set[i] = Set[i] - 32;

		}
		else
		{
			Set[i] = Set[i];
		}

	}
	printf("After capitalizing letters: %s", Set);

}





int main()
{
	char characterWord[20] = "ProGramMing Is fUn";
	ToUpperCase(characterWord);
}

