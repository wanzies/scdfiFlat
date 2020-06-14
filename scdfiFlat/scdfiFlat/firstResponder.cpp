#include "main.h"
using namespace std;

void createFRFile() {


	FILE* fr = NULL;
	fopen_s(&fr, "FirstResponder.csv", "w+");

	printf("**************************************************************\n\n");
	printf("INITITIALIZING iFlat First Responder Data\n\n");
	printf("Retrieving from cloud...SUCCESS\n\n");
	printf("Emergency Detected At Woodlands BLK 834, St 83\n");
	printf("Processing live data for viewing\n");
	printf("Live data ready for viewing\n");

	fprintf(fr, "Unit, Current Pax, Unit type(room), Electricity, Temperature (celsius), Evacuated, Emergency\n");

   fprintf(fr, "#02-93,6,5,true,50,true,no\n"); //unit 1
	fprintf(fr, "#02-95,6,5,false,33,false,yes\n"); //unit 2
	fprintf(fr, "#02-97,0,4,false,34,false,no\n"); //unit 3
	fprintf(fr, "#02-99,1,1,true,90,false,yes\n"); //unit 4
	
	printf("View live data at FirstResponder.csv file!\n\n");
	printf("**************************************************************\n");

	fclose(fr);

}



void readFRFile() {
	
}





