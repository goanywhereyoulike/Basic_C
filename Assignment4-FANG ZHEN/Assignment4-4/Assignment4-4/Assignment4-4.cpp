// Assignment4-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
void VowelsToE(char Set[])
{
	for (int i = 0; i < 20; i++)
	{
		if (Set[i] == 'a' || Set[i] == 'i' || Set[i] == 'o' || Set[i] == 'u')
		{
			Set[i] = 'e';
		}
		else if(Set[i] == 'A' || Set[i] == 'I' || Set[i] == 'O' || Set[i] == 'U')
		{
			Set[i] = 'E';
		}
		else
		{
			Set[i] = Set[i];
		}
	}
	printf("Here is your new word: %s", Set);

}
int main()
{
	char characterWord[20] = "Talisman";
	VowelsToE(characterWord);
}

