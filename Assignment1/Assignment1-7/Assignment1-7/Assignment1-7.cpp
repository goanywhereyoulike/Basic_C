// Assignment1-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	printf("Let’s play Rock Paper Scissors Lizard Spock!\n 1 - Rock\n 2 - Paper\n 3 - Scissors\n 4 - Lizard\n 5 - Spock\n");
	int player1 = 0;
	int player2 = 0;
	printf("Player 1, choose your move: ");
	scanf_s("%d", &player1);
	printf("Player 2, choose your move: ");
	scanf_s("%d", &player2);
	if (player1 == player2)
	{
		printf("The result is a tie!");
	}
	else if (player1 == 1 && (player2 == 3 || player2 == 4) )
	{
		printf("Player 1 wins!");
	}
	else if (player1 == 2 && (player2 == 1 || player2 == 5) )
	{
		printf("Player 1 wins!");
	}
	else if (player1 == 3 && (player2 == 2 || player2 == 4) )
	{
		printf("Player 1 wins!");
	}
	else if (player1 == 4 && (player2 == 2 || player2 == 5) )
	{
		printf("Player 1 wins!");
	}
	else if (player1 == 5 && (player2 == 1 || player2 == 3) )
	{
		printf("Player 1 wins!");
	}
	else
	{
		printf("Player 2 wins!");
	}
}
