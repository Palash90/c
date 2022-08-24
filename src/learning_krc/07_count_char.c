#include<stdio.h>

int main() {
	long nc=0;
	while(getchar() != EOF)
		++nc;
	printf("Total number of characters is %ld\n", nc);

	return 0;
}


