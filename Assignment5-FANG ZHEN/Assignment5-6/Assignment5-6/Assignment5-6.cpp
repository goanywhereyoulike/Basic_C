
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


	struct Node *pHead = (struct Node *)malloc(sizeof(struct Node));
	pHead->nData = rand()%99+1;
	pHead->next = NULL;

	struct Node *pCurrent = pHead;
	for (int i = 1; i < n; i++)
	{
		pCurrent->next = (struct Node *)malloc(sizeof(struct Node));
		pCurrent = pCurrent->next;
		pCurrent->nData = rand()%99+1;
		pCurrent->next = NULL;
	}
	pCurrent = pHead;
	while(pCurrent!=NULL)
	{
		printf("%d ", pCurrent->nData);
		pCurrent = pCurrent->next;

	}
	printf("\n");
	struct Node *pCurrent2;
	pCurrent2 = pHead;
	pCurrent = pHead->next;
		while (pCurrent != NULL)
		{
			if (pCurrent->nData % 2 == 0)
			{
				pCurrent2->next = pCurrent->next;
				free(pCurrent);
				pCurrent = pCurrent2->next;
			}
			else
			{
				pCurrent = pCurrent->next;
				pCurrent2 = pCurrent2->next;
			}


		}

		printf("\nEven numbers have been deleted from the linked list.\n\n");
		printf("The remaining numbers in the list are: ");
		if (pHead->nData % 2 != 0)
		{
			pCurrent = pHead;
			printf("\n");
			while (pCurrent != NULL)
			{
				printf("%d ", pCurrent->nData);
				pCurrent = pCurrent->next;
			}
		}
		else
		{
			pCurrent = pHead->next;
			printf("\n");
			while (pCurrent != NULL)
			{
				printf("%d ", pCurrent->nData);
				pCurrent = pCurrent->next;
			}
		}
	
	
}
