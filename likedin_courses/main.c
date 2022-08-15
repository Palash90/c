#include <stdio.h>
#include <stdlib.h>

int x;

void foo(){
    x = 5;
    printf("x is %d\n", x);
    x++;
    printf("x is %d\n", x);
}

int main()
{
    x = 60;
    printf("x is %d in main\n", x);
    x++;

    foo();

printf("x is %d in main\n", x);

foo();

printf("x is %d in main\n", x);
    return 0;
}
