// Assignment5-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	int number = 0;
	struct Node *pHead = (struct Node *)malloc(sizeof(struct Node));
	pHead->nData = rand() % 99 + 1;
	pHead->next= NULL;

	struct Node *pCurrent = pHead;
	for (int i = 1; i < n; i++)
	{
		pCurrent->next= (struct Node *)malloc(sizeof(struct Node));
		pCurrent = pCurrent->next;
		pCurrent->nData = rand() % 99 + 1;
		pCurrent->next = NULL;
	}

	pCurrent = pHead;
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", pCurrent->nData);
	
		pCurrent = pCurrent->next;
	}

	printf("\nEnter the index you want to search: ");
	scanf_s("%d", &number);
	number = number - 1;
	if (number >= n||number<0)
	{
		printf("\nERROR. That is beyond the linked list!");
		return 0;
	}


	pCurrent = pHead;
	for (int i = 0; i < n; i++)
	{
		if (number == i)
		{
			if (number == 0)
			{
				printf("\nThe %dst node has the number %d", number + 1, pCurrent->nData);
			}
			else if (number == 1)
			{
				printf("\nThe %dnd node has the number %d", number + 1, pCurrent->nData);
			}
			else if (number == 2)
			{
				printf("\nThe %drd node has the number %d", number + 1, pCurrent->nData);
			}
			else
			{
			
			printf("\nThe %dth node has the number %d", number+1, pCurrent->nData);
		    }
		}
		pCurrent = pCurrent->next;
	}

}


