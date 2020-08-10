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
	int inputnumber = 0;
	int numberindex=0;


	struct Node *pHead = (struct Node *)malloc(sizeof(struct Node));
	pHead->nData = rand() % 99 + 1;
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
	while (pCurrent != NULL)
	{
		printf("%d ", pCurrent->nData);
		pCurrent = pCurrent->next;

	}

	
	printf("\nWhat number do you want to add to the linked list: ");
	scanf_s("%d", &inputnumber);
	printf("\nWhich index position do you want to add it to:  ");
	scanf_s("%d", &numberindex);

	struct Node *Temp= (struct Node *)malloc(sizeof(struct Node));
	Temp->nData = inputnumber;
	Temp->next = NULL;
	if (numberindex < 0 || numberindex>10)
	{
		printf("INPUT ERROR!");
	}
	else
	{
		if (numberindex != 0)
		{

			pCurrent = pHead;
			for (int i = 0; i < numberindex - 1; i++)
			{
				pCurrent = pCurrent->next;
			}

			Temp->next = pCurrent->next;
			pCurrent->next = Temp;

			pCurrent = pHead;
			printf("\nNumber added to the linked list. The new order of the numbers is now:\n");
			while (pCurrent != NULL)
			{
				printf("%d ", pCurrent->nData);
				pCurrent = pCurrent->next;

			}

		}
		else
		{
			Temp->next = pHead;
			pCurrent = Temp;
			printf("\nNumber added to the linked list. The new order of the numbers is now:\n");
			while (pCurrent != NULL)
			{
				printf("%d ", pCurrent->nData);
				pCurrent = pCurrent->next;
			}
		}

	}
}


