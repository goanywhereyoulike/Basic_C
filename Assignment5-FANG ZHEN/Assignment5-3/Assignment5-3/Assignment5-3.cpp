// Assignment5-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<time.h>

struct Node
{
	int nData;
	struct Node *next;

};


int main()
{
	srand(time(NULL));
	int n = 10;
	int lastnumber1 = 0;
	int lastnumber2 = 0;
	int lastnumber3 = 0;


	struct Node *pHead = (struct Node *)malloc(sizeof(struct Node));
	pHead->nData = rand() % 99 + 1;
	pHead->next = NULL;

	struct Node *pCurrent = pHead;
	for (int i = 1; i < n; i++)
	{
		pCurrent->next= (struct Node *)malloc(sizeof(struct Node));
		pCurrent = pCurrent->next;
		pCurrent->nData= rand() % 99 + 1;
		pCurrent->next = NULL;
	}
	pCurrent = pHead;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", pCurrent->nData);
		pCurrent = pCurrent->next;

	}

	pCurrent = pHead;
	for (int i = 0; i <n; i++)
	{
		if (i == n - 3)
		{
			lastnumber3 = pCurrent->nData;
		}
		else if (i == n - 2)
		{
			lastnumber2 = pCurrent->nData;
		}
		else if (i == n - 1)
		{
			lastnumber1 = pCurrent->nData;
		}
		pCurrent = pCurrent->next;
	}
	printf("\nThe last three numbers are: %d %d %d", lastnumber1, lastnumber2, lastnumber3);
}


