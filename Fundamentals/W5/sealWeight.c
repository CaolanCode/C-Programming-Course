/*
 * test to read contents of a file into an array and get the average
 * CaolanCode
 * July, 26, 2022
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// file handle variable
	FILE *file;
	// open file and read it
	file = fopen("seal.txt", "r");
	// array for number
	long int numArray[20];
	// variables
	int i = 0, j, counter = 0;

	// check if error has occur with reading file
	if(file == NULL){
		printf("Error opening File\n");
		// return 1 to signal that something has gone wrong
		return 1;
	}


	
	return 0;
}
