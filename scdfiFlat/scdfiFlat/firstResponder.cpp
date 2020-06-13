#include "main.h"
using namespace std;



void createFRFile() {


	FILE* fr = NULL;

	fopen_s(&fr, "FirstResponder.csv", "w+");

	fprintf(fr, "Unit, Current Pax, Unit type(room), Electricity, Temperature (celsius), Evacuated, Emergency\n");
	
    fprintf(fr, "#02-93,6,5,true,50,true,no\n"); //unit 1
	fprintf(fr, "#02-95,6,5,false,33,false,yes\n"); //unit 2
	fprintf(fr, "#02-97,0,4,false,34,false,no\n"); //unit 3
	fprintf(fr, "#02-99,1,1,true,90,false,yes\n"); //unit 4

}



void readFRFile() {
	
}





