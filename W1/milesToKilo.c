/*
 * Convert miles and yards to kilometres
 * km = yd / 1093.6
 * CaolanCode
 * July, 23, 2022
 */

#include <stdio.h>

int main(){
	int miles, yards;
	double kilometres;
	printf("Please enter miles: ");
	scanf("%d", &miles);
	printf("Please enter yards: ");
	scanf("%d", &yards);
	kilometres = 1.609 * (miles + yards/1760.0);
	printf("%d miles and %d yards is equal to %lf kilometres\n", miles, yards, kilometres);
	return 0;
}
