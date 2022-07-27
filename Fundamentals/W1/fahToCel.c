/*
 * Conversion of Fahrenheit to Celsius
 * C = (F - 32)/1.8
 */

# include <stdio.h>
int main(void){
	int fahrenheit, celsius;
	printf("Please enter fahrenheit as an integer:");
	// & looks for the memory position of fahrenheit, rather that output the value of fahrenheit
	scanf("%d", &fahrenheit);
	celsius = (fahrenheit - 32)/1.8; 
	printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
	return 0;
}
