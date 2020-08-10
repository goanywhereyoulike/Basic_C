// Assignment5-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
struct Node
{
	int nData;
	struct Node *next;


};
int main()
{

	int n = 10;
	int number = 0;


	printf("Enter a number to add to the linked list: ");
	scanf_s("%d", &number);
	if (number != -1)
	{
		struct Node *pHead = (struct Node *)malloc(sizeof(struct Node));
		pHead->nData = number;
		pHead->next = NULL;

		struct Node *pCurrent = pHead;

		while (number != -1)
		{
			printf("Enter a number to add to the linked list: ");
			scanf_s("%d", &number);
			pCurrent->next = (struct Node *)malloc(sizeof(struct Node));

			pCurrent = pCurrent->next;
			pCurrent->nData =number;
			pCurrent->next = NULL;

		}
		pCurrent = pHead;
		printf("\nHere is your linked list:\n");
		while(pCurrent->nData!=-1)
		{
			printf("%d ", pCurrent->nData);
			pCurrent = pCurrent->next;
		}
	}
	else
	{
		printf("There is no linked list.");
	}
}

