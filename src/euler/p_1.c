#include<stdio.h>

int main () {
  long result = 0;
  int i;
  for(i=1; i < 1000; i++) {
    if((i%3 == 0) || (i%5 == 0) ){
      result += i;
    }
  }
  printf("Result is %ld", result);
}
