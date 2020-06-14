#include "main.h"



void flatManager()
{
	FILE* output = NULL;
	fopen_s(&output, "FlatManagerData.csv", "w+");
	fprintf(output, "Current Flat PAX, 78\n"); // flat pax current total
	fprintf(output, "Overall Total, 96\n"); // flat pax current total
	fprintf(output, "UNIT, MOVEMENT STATUS, ELECTRICITY, COMMUNICATIONS \n"); // flat pax current total

	for (int i = 0; i < 10; i++)
	{
		printf("*");
	}
	printf("\n\n");

	printf("INITIALIZING iFLAT MANAGER DATA\n");
	printf("Current Flat PAX, 78\n"); // flat pax current total
	printf("Overall Total, 96\n\n"); // flat pax current total
	printf("UNIT, MOVEMENT STATUS, ELECTRICITY, COMMUNICATIONS \n"); // flat pax current total

	for (int i = 0; i < 10; i++)
	{
		for (int j = 20; j < 25; j++)
		{
			if (j % 2)
			{
				fprintf(output, "Unit %d - %d, NORMAL, RUNNING, ONLINE\n", i, j); // flat pax current total
				printf( "Unit %d - %d, NORMAL, RUNNING, ONLINE\n", i, j); // flat pax current total
			}

			else if (j%3)
			{
				fprintf(output, "Unit %d - %d, UNOCCUPIED, OFF, OFFLINE\n", i, j); // flat pax current total
				printf("Unit %d - %d, UNOCCUPIED, OFF, OFFLINE\n", i, j); // flat pax current total
			}

			else
			{
				fprintf(output, "Unit %d - %d, WARNING, OFF, ONLINE\n", i, j); // flat pax current total
				printf("Unit %d - %d, WARNING, OFF, ONLINE\n", i, j); // flat pax current total
			}

		}
	}
	printf("\n\n");

	printf("COMPRESSING DATA AND SAVED TO CLOUD FOR ACCESS TO AUTHORITIES\n");

	printf("\n\n");

	for (int i = 0; i < 10; i++)
	{
		printf("*");
	}
	
	
	fclose(output);
}