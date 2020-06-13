//Fn to open file
#include "main.h"

void createFile()
{
	FILE* fp = NULL;
	fopen_s(&fp, "Output.csv", "w+");

	fprintf(fp, "Sup!, niggas\n");
}

