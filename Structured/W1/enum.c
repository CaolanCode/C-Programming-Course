/*
 * Enumerated Types
 */

#include <stdio.h>

enum day{Sun, Mon, Tues, Wed, Thurs, Fri, Sat}; // declare type

void print_day(enum day d){
	switch(d){
		case Sun: printf(" Sunday "); break;
		case Mon: printf(" Monday "); break;
		case Tues: printf(" Tuesday "); break;
		case Wed: printf(" Wednesday "); break;
		case Thurs: printf(" Thursday "); break;
		case Fri: printf(" Friday "); break;
		case Sat: printf(" Saturday "); break;
	 	default: printf("%d is an error", d);
	}
}

// get value of next day using modulo
enum day next_day(enum day d){
	return(d + 1 % 7);
}

// get value of yesterday
enum day yesterday(enum day d){
	return(d - 1 % 7);
}

int main(){
	enum day today = Thurs;
	print_day(today);
	printf("\n\n");
	print_day(7); // check error
	printf("\n\n");
	print_day(next_day(today));
	printf("\n\n");
	print_day(yesterday(today));
	printf("\n\n");
	return 0;
}

