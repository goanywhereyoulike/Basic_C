// Assignment1-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int nscore = 0;
	int ntotalscore = 0;
	float percentage = 0;
	printf("Enter the score you got: ");
	scanf_s("%d", &nscore);
	printf("Enter the total items in the exam: ");
	scanf_s("%d", &ntotalscore);

	percentage = 100.0 * nscore / ntotalscore;

	printf("You got a score of %d/%d. That is equal to %.2f%%", nscore, ntotalscore, percentage);
}
