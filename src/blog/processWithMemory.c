#include <stdio.h>

/*
 * This program calculates the result and stores in memory.
 * Author: Palash Kanti Kundu
 * Since: March 26, 2016
 */
int main(){
	int i = 5, j = 6, k = 7, radius1 = 8, radius2 = 9;
	float pi = (float) 22/7;
	printf("%d\n", (i+j));
        printf("%d\n", (j+k));
        printf("%d\n", (i+k));
        printf("The perimeter of circle with %d radius is %f\n", radius1, ((float) 2*pi*radius1));
        printf("The perimeter of circle with %d radius is %f\n", radius2, ((float) 2*pi*radius2));

	return 0;
}
