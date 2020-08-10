
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
	int x = 0;
	int y = 0;
	


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
	while(pCurrent!=NULL)
	{
		printf("%d ", pCurrent->nData);
		pCurrent = pCurrent->next;
	}

	printf("\nEnter the index of the first number:");
	scanf_s("%d", &x);
	printf("\nEnter the index of the second number:");
	scanf_s("%d", &y);

	struct Node *Temp;
	struct Node *Temp2;
	struct Node *Temp3;
	struct Node *Temp4;
	struct Node *Temp5;
	struct Node *Temp6;
	

	pCurrent = pHead;
	for (int i = 0; i < x - 1; i++)
	{
		pCurrent = pCurrent->next;
	}
	Temp2 = pCurrent;
	pCurrent = pCurrent->next;
	Temp4 = pCurrent;
	Temp5 = pCurrent->next;

	printf("\nThe updated linked list is: ");
	pCurrent = pHead;
	for(int i=0;i<y-1;i++)
	{
		pCurrent = pCurrent->next;
	}
	Temp = pCurrent;
	pCurrent = pCurrent->next;
	Temp6 = pCurrent;
	Temp3 = pCurrent->next;
	if (x != 0 && y != 0)
	{
		if (x < y)
		{
			if (Temp4->next != Temp6)
			{

				Temp2->next = Temp6;
				Temp6->next = Temp4->next;
				Temp->next = Temp4;
				Temp4->next = Temp3;
			}
			else
			{
				Temp2->next = Temp6;
				Temp6->next = Temp;
				Temp->next = Temp3;
			}

			pCurrent = pHead;
			while (pCurrent != NULL)
			{
				printf("%d ", pCurrent->nData);
				pCurrent = pCurrent->next;
			}
		}
		else if (x > y)
		{
			if (Temp6->next != Temp4)
			{

				Temp->next = Temp4;
				Temp4->next = Temp6->next;
				Temp2->next = Temp6;
				Temp6->next = Temp5;
			}
			else
			{
				Temp->next = Temp4;
				Temp4->next = Temp2;
				Temp2->next = Temp5;
			}

			pCurrent = pHead;
			while (pCurrent != NULL)
			{
				printf("%d ", pCurrent->nData);
				pCurrent = pCurrent->next;
			}


		}

	}
	else 
	{
		pCurrent = pHead;

		if (x == 0)
		{
			if (pCurrent->next != Temp6)
			{
				Temp6->next=pCurrent->next;
				Temp->next = pCurrent;
				pCurrent->next = Temp3;
			}
			else
			{
				Temp6->next = pCurrent;
				Temp->next = Temp3;
			}



			pCurrent = Temp6;
			while (pCurrent != NULL)
			{
				printf("%d ", pCurrent->nData);
				pCurrent = pCurrent->next;
			}



		}
		else if(y==0)
		{

			if (pCurrent->next != Temp4)
			{
				Temp4->next = pCurrent->next;
				Temp2->next = pCurrent;
				pCurrent->next = Temp5;
			}
			else
			{
				Temp4->next = pCurrent;
				Temp2->next = Temp5;
			}

			pCurrent = Temp4;
			while (pCurrent != NULL)
			{
				printf("%d ", pCurrent->nData);
				pCurrent = pCurrent->next;
			}

		}



	}


}
