#include<stdio.h>

int main(){
	int c, nl=0;;

	while((c=getchar()) != EOF){
		if(c == '\n')
			++nl;
	}
	printf("Total number of lines in the text is %d\n", nl);
	return 0;
}
