#include<stdio.h>

/* Fahrenhite-Celsius Table
	for fahr =20, 40, 60...300*/
int main() {
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temparature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower;

	while(fahr <= upper){
		celsius = 5*(fahr-32)/9;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
