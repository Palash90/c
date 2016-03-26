#include <stdio.h>

/*
 * This program calculates the sum each time it requires.
 * Author: Palash Kanti Kundu
 * Since: March 26, 2016
 */
int main(){
	int i, j, radius;
 	float pi = (float) 22/7;
	printf("Please enter two numbers to add\n");
	scanf("%d %d", &i, &j);
	printf("%d + %d = %d\n", i, j, (i+j));
	printf("Enter the radius:\n");
	scanf("%d", &radius);
	printf("The perimeter of circle with radius %d is %f\n", radius, (2*pi*radius));
	return 0;
}
