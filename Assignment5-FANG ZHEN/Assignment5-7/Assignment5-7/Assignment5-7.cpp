// Assignment5-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

struct Node
{
	char nData;
	struct Node *next;


};
int main()
{

	int n = 5;
	struct Node *pHead = (struct Node *)malloc(sizeof(struct Node));
	pHead->nData = 'a';
	pHead->next = NULL;

	struct Node *pCurrent = pHead;

	for (int i = 1; i < n-1; i++)
	{
		pCurrent->next = (struct Node *)malloc(sizeof(struct Node));

		pCurrent = pCurrent->next;
		pCurrent->nData = 'a'+2*i;
		pCurrent->next = NULL;

	}

	pCurrent->next = (struct Node *)malloc(sizeof(struct Node));
	pCurrent = pCurrent->next;
	pCurrent->nData = 'a' + 10;
	pCurrent->next = pHead;

	pCurrent = pHead;
	for (int i = 0; i < n+3; i++)
	{
		printf("%c ", pCurrent->nData);
		pCurrent = pCurrent->next;
	}
}

