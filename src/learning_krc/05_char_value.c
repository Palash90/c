#include<stdio.h>

int main(){
	int i;

	char c;

	printf("%lu\n", sizeof(c));
	
	
	for(i=0; i<255;i++){
		printf("%d\t%c\n", i, i);
	}
	return 0;
}
