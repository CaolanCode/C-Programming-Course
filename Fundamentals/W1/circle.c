/* 
 * Circle and Area
 */
// input output library
#include <stdio.h>
// define PI to six figures as a double can store the result
#define PI 3.14159

int main(){
	double area = 0.0, radius = 0.0;
	printf("Enter raduis: ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("radius of %lf metres; area is %lf sq. metres\n", radius, area);
	return 0;
}
