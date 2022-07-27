/* 
 * Sine value test
 */

#include <stdio.h>
#include <math.h>

int main(void){
	double sinValue, num;
	printf("Please enter a number:");
	scanf("%lf", &num);

	sinValue = sin(num);

	printf("\nThe Sine Value of %lf is %lf", num, sinValue);
	return 0;
}
