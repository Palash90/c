#include<stdio.h>

int main() {
	float fahr, celsius;
	int lower = 0, upper = 300, step = 20;

	printf("Fahrenhite to  Centrigrade Coversion\n");
	printf("-------------------------------------\n");

	while(celsius <= upper) {
		fahr = (9.0/5.0 * celsius ) + 32.0;
		printf("%3.0f\t%6.3f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
	

