#include<stdio.h>

int main(){
	int c, nl=0, nb=0, nt=0;

	while((c=getchar()) != EOF){
		if(c == '\n')
			++nl;
		if(c == ' ')
			++nb;
		if(c == '\t')
			++nt;
	}
	printf("Total number of lines in the text is %d\n", nl);
	printf("Total number of blanks in the text is %d\n", nb);
	printf("Total number of tabs in the text is %d\n", nt);
	return 0;
}
