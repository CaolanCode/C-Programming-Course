/*
 * Function that prints a table of values for sine and cosine between (0,1)
 * CaolanCode
 * July, 24, 2022
 */

#include <stdio.h>
#include <math.h>

int main(void){
	double total = 10.0;
	for(int i=0; i<total; i++){
		printf("sin(%d) = %lf and cos(%d) = %lf\n", i, fabs(sin(i)), i, fabs(cos(i)));
	}
}
