#include<stdio.h>

int main(){
	
	int prev, curr, len = 0, maxLen = 0;
	
	printf("Enter first number: ");
	scanf("%d", &prev);
	if(prev >= 0){
		len = 1;
		maxLen = len;
		
		printf("Enter next number: ");
		scanf("%d", &curr);
		
		while(curr >= 0){
						
			if(curr > prev){
				len = len + 1;
			} else {
				if(maxLen < len){
					maxLen = len;
				}
				len = 1;
			}
			prev = curr;
			printf("Enter next number: ");
			scanf("%d", &curr);
		}
	}
	if(maxLen < len){
		maxLen = len;
	}

	printf("Max length of contigeous sequence is %d\n", maxLen);
	return 0;
}

