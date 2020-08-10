// week 1a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int Health=1000;
	int Healthleft=50;
	char word = 'F';
	float time = 10.5;
	printf("I played overwatch last night \n");
	printf("In a game I suddenly met enemy at the corner\n");
	printf("My HP was %d \n", Health);
	printf("And after the battle, my HP left was %d\n", Healthleft);
	printf("I said the %c word unconsciously\n", word);
	printf("And I found that I only had %f minutes to win the game \n", time);
	Health = 1;
	Healthleft = 1000;
	word = 'T';
	time = 5;
	printf("Then I met another enemy and my HP was just %d.\n", Health);
	printf("After the help of my teemates, my HP left was back to %d\n", Healthleft);
	printf("I said the %c word to my teemates\n", word);
	printf("And the time left for this game is only %f minutes.", time);
}

