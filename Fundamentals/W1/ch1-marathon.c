/*
 * The distance of a marathon in kilometres
 */

#include <stdio.h>

int main(void){
	int miles = 26, yards = 385;
	double kilometres;
	
	kilometres = 1.609 * (miles + yards / 1760.0);
	printf("\nA marathon is %lf kilometres.\n\n", kilometres);
	return 0;
}

