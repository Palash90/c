#include<stdio.h>

int main() {
	float fahr, celsius;
	int lower = 0, upper = 300, step = 20;

	printf("Fahrenhite to  Centrigrade Coversion\n");
	printf("-------------------------------------\n");

	while(fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.3f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
	

