
//

#include "pch.h"
#include <iostream>
struct Games
{
	char name[50];
	int health;
	int attack;
};
int main()
{
	FILE *point;
	Games hero[5];
	fopen_s(&point, "Heroes.txt", "r");
	if (point == NULL)
	{
		printf("ERROR");
	}
	else
	{

		for(int i=0;i<5;i++)
		{
			fscanf_s(point, "%s", hero[i].name, 50);
			fscanf_s(point, "%d", &hero[i].health);
			fscanf_s(point, "%d", &hero[i].attack);
		}
		fclose(point);

		printf("File Heroes.txt loaded.\n");

		for (int j = 0; j < 5; j++)
		{
			printf("Hero %d: %s. HP: %d, Attack: %d\n", j + 1, hero[j].name, hero[j].health, hero[j].attack);
		}
	}
}


