/******************************************************************************
filename CSVParserDriver.c
author Howard Sin
email howard.sin@digipen.edu
date created 22 May 2019
Brief Description: A sample driver for testing CSV Parser
******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "CSVParser.h"

int main(void)
{
	/* Variable Declaration */
	struct CSVData dataFile;
	int result = FAIL;
	int i, j;
	dataFile.rowData = NULL;
	dataFile.size = 0;

	/* Functionality Tests */
	printf("Start of Functionality Tests\n");
	result = ReadCSVFile(&dataFile, "SampleCSVFile.csv");
	if (result == FAIL)
	{
		printf("Unable to read file, terminating...\n");
		return 1;
	}

	printf("Printing entire read CSV data file...\n");
	for (i = 0; i < dataFile.size; ++i)
	{
		for (j = 0; j < dataFile.rowData[i].size; ++j)
		{
			printf("GetEntry[%i][%i] = %s\n", i, j, GetEntry(&dataFile, i, j));
		}
	}
	printf("End of Functionality Tests (FreeCSVData test delayed)\n");

	/* Invalid Usage Tests */
	
	ReadCSVFile(NULL, "SampleCSVFile.csv");
	ReadCSVFile(&dataFile, NULL);
	
	GetEntry(NULL, 0, 0);
	
	GetEntry(&dataFile, 100, 0);
	#if 0
	GetEntry(&dataFile, 0, 100);
	FreeCSVData(NULL);
	
	#endif

	/* Post-Invalid Usage Test (FreeCSVData) */
	printf("Attempting to Free CSV Data...\n");
	FreeCSVData(&dataFile);

	return 0;
}