/*
 * ternary operator and flow of control
 */

#include <stdio.h>

int main(void){
	int speed;
	printf("\nEnter your speed as an integer:");
	scanf("%d", &speed);
	speed = (speed <= 65)? (65) :(speed <= 70)? (70): (90); // check if input is below 65, if true it returns 65. If not, it checks if the speed is below 70, if true it returns 70. If not, it return 90
	switch (speed){
		case 65: 
			printf("\nNo speeding ticket\n\n");
			break;
		case 70:
			printf("\nSpeeding ticket\n\n");
			break;
		case 90:
			printf("\nExpensive Speeding ticket\n\n");
			break;
		default:
			printf("\nIncorrect speed\n\n");
	}
	return 0;
}
			
