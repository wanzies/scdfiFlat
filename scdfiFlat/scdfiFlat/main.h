#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>


// Declare global variable here. This is the header file to be shared across all project files


extern FILE* fp; // the connection to the file

void flatManager(); // fn for flatmanager
void createFRFile();
void readFRFile();