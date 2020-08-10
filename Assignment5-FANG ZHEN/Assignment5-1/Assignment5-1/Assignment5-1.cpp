// Assignment5-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	int number = 0;
	int data = 0;
	int n = 10;
	struct Node *pHead = (struct Node *)malloc(sizeof(struct Node));
	pHead->nData = rand()%99+1;
	pHead->next = NULL;

	struct Node *pCurrent = pHead;
	
	for (int i = 1; i < n; i++)
	{
		pCurrent->next = (struct Node *)malloc(sizeof(struct Node));

		pCurrent = pCurrent->next;
		pCurrent->nData = rand() % 99 + 1;
		pCurrent->next = NULL;
	
	}
	pCurrent = pHead;
	data = pHead->nData;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", pCurrent->nData);
		if (pCurrent->nData >= data)
		{
			number = i;
			data = pCurrent->nData;
			
		}
		else
		{
			number = number;
		}
		
		pCurrent = pCurrent->next;
	}
	printf("\nThe highest number in the linked list is in Index %d", number);

}

