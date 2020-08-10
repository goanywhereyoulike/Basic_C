
//

#include "pch.h"
#include <iostream>
struct Thanos
{
	char name[50];
	int population;
};
int main()
{
	FILE *point;
	Thanos items[7];
	fopen_s(&point, "Thanos.txt", "r");
	if (point == NULL)
	{
		printf("ERROR");
	}
	else
	{
		for (int i = 0; i < 7; i++)
		{
			fscanf_s(point, "%s", items[i].name, 50);
			fscanf_s(point, "%d", &items[i].population);
		}

		printf("File Thanos.txt loaded.\n");
		for (int i = 0; i < 7; i++)
		{
			printf("Country %d: %s (Population: %d)\n", i + 1, items[i].name, items[i].population);
		}

		for (int i = 0; i < 7; i++)
		{
			items[i].population = items[i].population / 2;
		}

		fclose(point);

		fopen_s(&point, "Thanos.txt", "w");
		for (int i = 0; i < 7; i++)
		{
			fprintf(point, "%s\n", items[i].name);
			fprintf(point, "%d\n", items[i].population);
		}

	}
	printf("\n\nThanos snapped his fingers. Country populations have halved (see Thanos.txt for halved populations)");

}


