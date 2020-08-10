// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<time.h>
#include <windows.h>
#include <stdlib.h>


void gotoxy(int x, int y)  
{
	COORD coord;
	coord.X = y;
	coord.Y = x;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}//put the cursor to the position needed


struct game
{
	int questionNumber;
	int gameReward;
	char questiontitle[150];
	char choiceA[50];
	char choiceB[50];
	char choiceC[50];
	char choiceD[50];
	char correctanswer;



};
//game structure

void reward(int money)
{
	gotoxy(0, 50);
	printf("\t\t\t\t\tReward:$%d\n", money);

}
void lifelinemessage(int number50,int numberfriend,int numberauidence)
{
	gotoxy(1, 50);
	printf("\t\t\t\t\t**************************\t\t");
	gotoxy(2, 50);
	printf("\t\t\t\t\t[A]ChoiceA");
	gotoxy(3, 50);
	printf("\t\t\t\t\t[B]ChoiceB");
	gotoxy(4, 50);
	printf("\t\t\t\t\t[C]ChoiceC");
	gotoxy(5, 50);
	printf("\t\t\t\t\t[D]ChoiceD");
	gotoxy(6, 50);
	printf("\t\t\t\t\t[1]50/50 lifeline: %d",number50);
	gotoxy(7, 50);
	printf("\t\t\t\t\t[2]Call a Friend lifeline: %d",numberfriend);
	gotoxy(8, 50);
	printf("\t\t\t\t\t[3]Ask the Audience: %d",numberauidence);
	gotoxy(9, 50);
	printf("\t\t\t\t\t[4]Go home");
	gotoxy(10, 50);
	printf("\t\t\t\t\t**************************\t\t");
	


}//display the lifeline message

char letter(char word)
{
	if (word >= 97 && word <= 122)
	{
		return word - 32;
	}
	else 
	{
		return word;
	}
}//chagne lower-case letter to upper-case letter





char wronganswerquestion(char input)
{
	if (input < 65 || input>68)
	{
		if (input != '1'&&input != '2'&&input != '3'&&input != '4')
		{
			printf("Wrong Input!\n");
			printf("Enter your answer:  ");
			scanf_s(" %c", &input);
			input = letter(input);
			return wronganswerquestion(input);
		}
	}
	else
	{

		return input;
	}

}//check if the input makes sense when players answer the question


bool wronganswerstart(char input)
{
	
	if (input != 89 && input != 78)
	{
		printf("Wrong Input!\n");
		printf("Are you ready for the game?(y/n) ");
		scanf_s(" %c", &input);
		input = letter(input);
		return wronganswerstart(input);

	}
	else if(input=='N')
	{
		return false;
	}

}//check if the input makes sense at the beginning


void lifeline50(char correct)
{
	char respond[4] = { 'A','B','C','D' };
	char wronganswer1, wronganswer2;
	int n = 0;
	int x, y = 0;
	int length = strlen(respond);
	for (int i = 0; i < 4; i++)
	{
		if (respond[i] == correct)
		{
			n = i;
		}
	}
	for (int j = n; j < 4; j++)
	{
		respond[j] = respond[j + 1];
	}
	
	    x = rand() % 2;
		wronganswer1 = respond[x];
		wronganswer2 = respond[x+1];
	
		if (wronganswer1 != wronganswer2)
		{
			wronganswer2= wronganswer2;

		}
		else
		{
			wronganswer2= respond[rand() % 3];
		}
		
		printf("The two wrong choices are %c and %c\n", wronganswer1, wronganswer2);
}//50/50 lifeline

void callfriend()
{
	char respond[4] = { 'A','B','C','D' };
	printf("\nThe correct answer the friend gives is %c\n", respond[rand() % 4]);

}//Call a friend lifeline

void askaudience()
{
	float a, b, c, d = 0;
	float summary = 0;
	a = rand() % 100;
	b = rand() % 100;
	c = rand() % 100;
	d = rand() % 100;
	summary = a + b + c + d;
	printf("\nThe percentage of choice A is %.2f %%\n", 100 * a / summary);
	printf("The percentage of choice B is %.2f %%\n", 100*b / summary );
	printf("The percentage of choice C is %.2f %%\n", 100*c / summary );
	printf("The percentage of choice D is %.2f %%\n\n", 100*d / summary);

}//Ask the audience lifeline


int wherex()
{
	CONSOLE_SCREEN_BUFFER_INFO place;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &place);
	return (place.dwCursorPosition.X + 1);
}

int wherey()
{
	CONSOLE_SCREEN_BUFFER_INFO place;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &place);
	return (place.dwCursorPosition.Y + 1);
}
//find the position of cursor




int main()
{
	char input = 'a';
	char answer='y';
	int money = 0;
	bool answer1 = true;
	printf("\t\t\tWho Wants to Be a Millionaire\t\t\t\n");
	printf("\t\t********************************************\t\t\t\n");
	printf("Are you ready for the game?(y/n)");
	scanf_s("%c", &input);
	input=letter(input);
	answer1=wronganswerstart(input);
	if (answer1 == false)
	{
		return 0;
	}
	system("cls");
	srand(time(NULL));



//The questions and answers
	game question1;
	question1.questionNumber = 1;
	question1.gameReward = 500;
	strcpy_s(question1.questiontitle, "Which company is The Legend of Zelda: Breath of the Wild from?");
	strcpy_s(question1.choiceA, "Nintendo");
	strcpy_s(question1.choiceB, "Capcom");
	strcpy_s(question1.choiceC, "Riot");
	strcpy_s(question1.choiceD, "Valve");
	question1.correctanswer='A';

	game question2;
	question2.questionNumber = 2;
	question2.gameReward = 1000;
	strcpy_s(question2.questiontitle, "What kind of game is DOTA2?");
	strcpy_s(question2.choiceA, "MMORPG");
	strcpy_s(question2.choiceB, "MOBA");
	strcpy_s(question2.choiceC, "ARPG");
	strcpy_s(question2.choiceD, "JRPG");
	question2.correctanswer='B';

	game question3;
	question3.questionNumber = 3;
	question3.gameReward = 2000;
	strcpy_s(question3.questiontitle, "How many roles does League of Legends have?");
	strcpy_s(question3.choiceA, "144");
	strcpy_s(question3.choiceB, "142");
	strcpy_s(question3.choiceC, "140");
	strcpy_s(question3.choiceD, "143");
	question3.correctanswer='A';

	game question4;
	question4.questionNumber = 4;
	question4.gameReward = 3000;
	strcpy_s(question4.questiontitle, "How many years has World of Warcraft been running?");
	strcpy_s(question4.choiceA, "13");
	strcpy_s(question4.choiceB, "18");
	strcpy_s(question4.choiceC, "15");
	strcpy_s(question4.choiceD, "14");
	question4.correctanswer='C';

	game question5;
	question5.questionNumber = 5;
	question5.gameReward = 5000;
	strcpy_s(question5.questiontitle, "Which game has the first prize in the world?");
	strcpy_s(question5.choiceA, "DOTA2");
	strcpy_s(question5.choiceB, "LEAGUE OF LEGENDS");
	strcpy_s(question5.choiceC, "CS.GO");
	strcpy_s(question5.choiceD, "PUBG");
	question5.correctanswer='A';

	game question6;
	question6.questionNumber = 6;
	question6.gameReward = 7500;
	strcpy_s(question6.questiontitle, "What kind of game is final Fantasy 14?");
	strcpy_s(question6.choiceA, "MOBA");
	strcpy_s(question6.choiceB, "MMORPG");
	strcpy_s(question6.choiceC, "JRPG");
	strcpy_s(question6.choiceD, "RTS");
	question6.correctanswer='B';

	game question7;
	question7.questionNumber = 7;
	question7.gameReward = 10000;
	strcpy_s(question7.questiontitle, "When did the PORTAL come out of the game?");
	strcpy_s(question7.choiceA, "2005");
	strcpy_s(question7.choiceB, "2077");
	strcpy_s(question7.choiceC, "2007");
	strcpy_s(question7.choiceD, "2009");
	question7.correctanswer='C';

	game question8;
	question8.questionNumber = 8;
	question8.gameReward = 15000;
	strcpy_s(question8.questiontitle, "Which game is the first to have an official e-sports competition?");
	strcpy_s(question8.choiceA, "STARCRAFT");
	strcpy_s(question8.choiceB, "LEAGUE OF LEGENDS");
	strcpy_s(question8.choiceC, "DOTA2");
	strcpy_s(question8.choiceD, "CS 1.6");
	question8.correctanswer='A';

	game question9;
	question9.questionNumber = 9;
	question9.gameReward = 25000;
	strcpy_s(question9.questiontitle, "What game is DOTA1 based on?");
	strcpy_s(question9.choiceA, "Warcraft");
	strcpy_s(question9.choiceB, "WARHARM");
	strcpy_s(question9.choiceC, "DOOM");
	strcpy_s(question9.choiceD, "HELO");
	question9.correctanswer='A';

	game question10;
	question10.questionNumber = 10;
	question10.gameReward = 50000;
	strcpy_s(question10.questiontitle, "What year did theMonster Hunter- Word come out?");
	strcpy_s(question10.choiceA, "2018 January  11");
	strcpy_s(question10.choiceB, "2017 Nov 12");
	strcpy_s(question10.choiceC, "2018 January  26");
	strcpy_s(question10.choiceD, "2018 Feb 16");
	question10.correctanswer='C';

	game question11;
	question11.questionNumber = 11;
	question11.gameReward = 75000;
	strcpy_s(question11.questiontitle, "In what year did the final fantasy series of games appear?");
	strcpy_s(question11.choiceA, "1979");
	strcpy_s(question11.choiceB, "1987");
	strcpy_s(question11.choiceC, "1998");
	strcpy_s(question11.choiceD, "2001");
	question11.correctanswer='B';

	game question12;
	question12.questionNumber = 12;
	question12.gameReward = 150000;
	strcpy_s(question12.questiontitle, "Which command is Warcraft's 'invincible'?");
	strcpy_s(question12.choiceA, "whosyourdaddy");
	strcpy_s(question12.choiceB, "greedisgood");
	strcpy_s(question12.choiceC, "strengthandhonor");
	strcpy_s(question12.choiceD, "thereisnospoon");
	question12.correctanswer='A';

	game question13;
	question13.questionNumber = 13;
	question13.gameReward = 250000;
	strcpy_s(question13.questiontitle, "In this year's E3, the release date of cyberpunk 2077 was announced. When is it?");
	strcpy_s(question13.choiceA, "2020 April 16");
	strcpy_s(question13.choiceB, "2077 April 16");
	strcpy_s(question13.choiceC, "2021 April 16");
	strcpy_s(question13.choiceD, "2022 April16");
	question13.correctanswer='A';

	game question14;
	question14.questionNumber = 14;
	question14.gameReward = 500000;
	strcpy_s(question14.questiontitle, "What country is Capcom's company in?");
	strcpy_s(question14.choiceA, "Japan");
	strcpy_s(question14.choiceB, "America");
	strcpy_s(question14.choiceC, "Canada");
	strcpy_s(question14.choiceD, "Poland");
	question14.correctanswer='A';

	game question15;
	question15.questionNumber = 15;
	question15.gameReward = 1000000;
	strcpy_s(question15.questiontitle, "Are you willing to learn game programming when you understand \nthe boredom of programming and the difficulties of modeling?");
	strcpy_s(question15.choiceA, "YES");
	strcpy_s(question15.choiceB, "NO");
	strcpy_s(question15.choiceC, "I do not know");
	strcpy_s(question15.choiceD, "I do not care");
	question15.correctanswer='A';


	int number50 = 1;
	int numberfriend=1;
	int numberaudience = 1;//the number of chance to use each lifeline
	
	
	//Question 1

	printf("%d.%s", question1.questionNumber, question1.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question1.choiceA);
	printf("B.%s\n", question1.choiceB);
	printf("C.%s\n", question1.choiceC);
	printf("D.%s\n", question1.choiceD);//display the question
	
	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);//enter the answer,change the lower-case letter to upper-case letter(whether you input lower-case or upper-case letter is ok), check if the input makes sense (A,B,C,D,1,2,3,4)
	int x, y;//the position of cursor


	while (answer < 65 || answer >68)//when the input is not letter but numberS
	{
		
			
	
		if (answer == '1')//50/50 lifeline
		{
			if (number50 > 0)
			{
				number50--;
				
				lifeline50(question1.correctanswer);//display the lifeline message
				x = wherex();
				y = wherey();//get the position of cursor
				
				lifelinemessage(number50, numberfriend, numberaudience); // go to the display position to change the number of chance to use lifeline 
				gotoxy(y,x );//go back to the position of answer place
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);
				

			}
			else//the number of chance to use lifeline is 0
			{

				printf("\nYou do not have the chance\n");
				

		
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')//call a friend lifeline
		{
			if (numberfriend > 0)
			{
				numberfriend--;
				
				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);
				
			}
			else
			{

				printf("\nYou do not have the chance\n");
			
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;
				
				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y,x );
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");
			
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}



	}
	if (answer == question1.correctanswer)//input correct answer
	{
		money = question1.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)//input wrong answer
	{
		printf("You Lose! And your reward is $0\n");
		return 0;

	}
	
	system("PAUSE");
	system("cls");//claen the screen

	//Question2
	printf("%d.%s", question2.questionNumber, question2.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question2.choiceA);
	printf("B.%s\n", question2.choiceB);
	printf("C.%s\n", question2.choiceC);
	printf("D.%s\n", question2.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);
	

	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question2.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}



	}
	if (answer == question2.correctanswer)
	{
		money = question2.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $0\n");
		return 0;

	}

	system("PAUSE");
	system("cls");
	
	//Question3
	printf("%d.%s", question3.questionNumber, question3.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question3.choiceA);
	printf("B.%s\n", question3.choiceB);
	printf("C.%s\n", question3.choiceC);
	printf("D.%s\n", question3.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question3.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}



	}
	if (answer == question3.correctanswer)
	{
		money = question3.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $0\n");
		return 0;

	}

	system("PAUSE");
	system("cls");

	//Question4
	printf("%d.%s", question4.questionNumber, question4.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question4.choiceA);
	printf("B.%s\n", question4.choiceB);
	printf("C.%s\n", question4.choiceC);
	printf("D.%s\n", question4.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);
	

	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question4.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}



	}
	if (answer == question4.correctanswer)
	{
		money = question4.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $0\n");
		return 0;

	}

	system("PAUSE");
	system("cls");

	//Question5
	printf("%d.%s", question5.questionNumber, question5.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question5.choiceA);
	printf("B.%s\n", question5.choiceB);
	printf("C.%s\n", question5.choiceC);
	printf("D.%s\n", question5.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question5.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}



	}
	if (answer == question5.correctanswer)
	{
		money = question5.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $0\n");
		return 0;

	}

	system("PAUSE");
	system("cls");

	//Question6
	printf("%d.%s", question6.questionNumber, question6.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question6.choiceA);
	printf("B.%s\n", question6.choiceB);
	printf("C.%s\n", question6.choiceC);
	printf("D.%s\n", question6.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question6.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}




	}
	if (answer == question6.correctanswer)
	{
		money = question6.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $5000\n");
		return 0;

	}

	system("PAUSE");
	system("cls");
	
	
	//Question7
	printf("%d.%s", question7.questionNumber, question7.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question7.choiceA);
	printf("B.%s\n", question7.choiceB);
	printf("C.%s\n", question7.choiceC);
	printf("D.%s\n", question7.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question7.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}




	}
	if (answer == question7.correctanswer)
	{
		money = question7.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $5000\n");
		return 0;

	}

	system("PAUSE");
	system("cls");

	//Question8
	printf("%d.%s", question8.questionNumber, question8.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question8.choiceA);
	printf("B.%s\n", question8.choiceB);
	printf("C.%s\n", question8.choiceC);
	printf("D.%s\n", question8.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question8.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}




	}
	if (answer == question8.correctanswer)
	{
		money = question8.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $5000\n");
		return 0;

	}

	system("PAUSE");
	system("cls");

	//Question9
	printf("%d.%s", question9.questionNumber, question9.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question9.choiceA);
	printf("B.%s\n", question9.choiceB);
	printf("C.%s\n", question9.choiceC);
	printf("D.%s\n", question9.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question9.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}




	}
	if (answer == question9.correctanswer)
	{
		money = question9.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $5000\n");
		return 0;

	}

	system("PAUSE");
	system("cls");

	//Question10
	printf("%d.%s", question10.questionNumber, question10.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question10.choiceA);
	printf("B.%s\n", question10.choiceB);
	printf("C.%s\n", question10.choiceC);
	printf("D.%s\n", question10.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question10.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}




	}
	if (answer == question10.correctanswer)
	{
		money = question10.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $5000\n");
		return 0;

	}

	system("PAUSE");
	system("cls");

	//Question11
	printf("%d.%s", question11.questionNumber, question11.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question11.choiceA);
	printf("B.%s\n", question11.choiceB);
	printf("C.%s\n", question11.choiceC);
	printf("D.%s\n", question11.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question11.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}



	}
	if (answer == question11.correctanswer)
	{
		money = question11.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $50000\n");
		return 0;

	}

	system("PAUSE");
	system("cls");

	//Question12
	printf("%d.%s", question12.questionNumber, question12.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question12.choiceA);
	printf("B.%s\n", question12.choiceB);
	printf("C.%s\n", question12.choiceC);
	printf("D.%s\n", question12.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question12.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}



	
	}
	if (answer == question12.correctanswer)
	{
		money = question12.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $50000\n");
		return 0;

	}

	system("PAUSE");
	system("cls");
	//Question13
	printf("%d.%s", question13.questionNumber, question13.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question13.choiceA);
	printf("B.%s\n", question13.choiceB);
	printf("C.%s\n", question13.choiceC);
	printf("D.%s\n", question13.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question13.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}




	}
	if (answer == question13.correctanswer)
	{
		money = question13.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $50000\n");
		return 0;

	}

	system("PAUSE");
	system("cls");

	//Question14
	printf("%d.%s", question14.questionNumber, question14.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question14.choiceA);
	printf("B.%s\n", question14.choiceB);
	printf("C.%s\n", question14.choiceC);
	printf("D.%s\n", question14.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question14.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}




	}
	if (answer == question14.correctanswer)
	{
		money = question14.gameReward;
		printf("\nYou are right!\n");
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $50000\n");
		return 0;

	}

	system("PAUSE");
	system("cls");

	//Question15
	printf("%d.%s", question15.questionNumber, question15.questiontitle);
	reward(money);
	lifelinemessage(number50, numberfriend, numberaudience);
	gotoxy(2, 0);
	printf("A.%s\n", question15.choiceA);
	printf("B.%s\n", question15.choiceB);
	printf("C.%s\n", question15.choiceC);
	printf("D.%s\n", question15.choiceD);

	printf("\nEnter your answer: ");
	scanf_s(" %c", &input);
	answer = letter(input);
	answer = wronganswerquestion(answer);


	while (answer < 65 || answer >68)
	{



		if (answer == '1')
		{
			if (number50 > 0)
			{
				number50--;

				lifeline50(question15.correctanswer);
				x = wherex();
				y = wherey();

				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");



				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '2')
		{
			if (numberfriend > 0)
			{
				numberfriend--;

				callfriend();
				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);

			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '3')
		{
			if (numberaudience > 0)
			{

				numberaudience--;

				askaudience();

				x = wherex();
				y = wherey();
				lifelinemessage(number50, numberfriend, numberaudience);
				gotoxy(y, x);
				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}
			else
			{

				printf("\nYou do not have the chance\n");

				printf("\nEnter your answer: ");
				scanf_s(" %c", &input);
				answer = letter(input);
				answer = wronganswerquestion(answer);


			}

		}
		else if (answer == '4')
		{
			printf("\nGoodbye, your reward is $%d", money);
			return 0;
		}




	}
	if (answer == question15.correctanswer)
	{
		money = question15.gameReward;
		x = wherex();
		y = wherey();
		reward(money);
		gotoxy(y, x);
		printf("\nCcongratulations! You win the million prize!\n");
		
		
	}
	else if (answer >= 65 && answer <= 68)
	{
		printf("You Lose! And your reward is $50000\n");
		return 0;

	}

}

