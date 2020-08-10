// Assignment2-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	printf("Let's play Rock Paper Scissors Lizard Spock!\n 1 - Rock\n 2 - Paper\n 3 - Scissors\n 4 - Lizard\n 5 - Spock\n");
	int player1 = 0;
	int player2 = 0;
	int i1 = 0;
	int i2 = 0;
	char playagain = 'y';
	char choose1[] = "Rock";
	char choose2[] = "Paper";
	char choose3[] = "Scissors";
	char choose4[] = "Lizard";
	char choose5[] = "Spock";
	char chooseplayer1[20];
	char chooseplayer2[20];



	while (playagain == 'Y' || playagain == 'y')
	{
		printf("Player 1, choose your move: ");
		scanf_s("%d", &player1);
		printf("Player 2, choose your move: ");
		scanf_s("%d", &player2);
		if (player1 == 1)
		{
			strcpy_s(chooseplayer1, choose1);
		}
		else if (player1 == 2)
		{
			strcpy_s(chooseplayer1, choose2);
		}
		else if (player1 == 3)
		{
			strcpy_s(chooseplayer1, choose3);
		}
		else if (player1 == 4)
		{
			strcpy_s(chooseplayer1, choose4);
		}
		else if (player1 == 5)
		{
			strcpy_s(chooseplayer1, choose5);
		}


		if (player2 == 1)
		{
			strcpy_s(chooseplayer2, choose1);
		}
		else if (player2 == 2)
		{
			strcpy_s(chooseplayer2, choose2);
		}
		else if (player2 == 3)
		{
			strcpy_s(chooseplayer2, choose3);
		}
		else if (player2 == 4)
		{
			strcpy_s(chooseplayer2, choose4);
		}
		else if (player2 == 5)
		{
			strcpy_s(chooseplayer2, choose5);
		}


		printf("player 1 chose %s\n", chooseplayer1);
		printf("player 2 chose %s\n", chooseplayer2);//print the choice


		if (player1 == player2)
		{
			printf("DRAW! Score is now(%d-%d)",i1,i2);
			
		}
		else if (player1 == 1 && (player2 == 3 || player2 == 4))
		{
			i1++;
			printf("Player 1 wins! Score is now(%d-%d)", i1, i2);
			
		}
		else if (player1 == 2 && (player2 == 1 || player2 == 5))
		{
			i1++;
			printf("Player 1 wins! Score is now(%d-%d)", i1, i2);
			
		}
		else if (player1 == 3 && (player2 == 2 || player2 == 4))
		{
			i1++;
			printf("Player 1 wins! Score is now(%d-%d)", i1, i2);
			
		}
		else if (player1 == 4 && (player2 == 2 || player2 == 5))
		{
			i1++;
			printf("Player 1 wins! Score is now(%d-%d)", i1, i2);
			
		}
		else if (player1 == 5 && (player2 == 1 || player2 == 3))
		{
			i1++;
			printf("Player 1 wins! Score is now(%d-%d)", i1, i2);
			
		}
		else
		{
			i2++;
			printf("Player 2 wins! Score is now(%d-%d)", i1, i2);
			
		}

		printf("Play again?(y/n): ");
		scanf_s(" %c", &playagain);
	}
}

