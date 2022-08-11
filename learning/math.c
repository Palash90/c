#include<stdio.h>
#include<math.h>

void main(){
    int a, b;

    puts("Please enter values of a and b one by one");

    scanf("%d", &a);
    scanf("%d", &b);

    printf("a is %d, b is %d\n", a, b);
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    printf("a %% b = %d\n", a%b);
    printf("a to the power b is %f\n", pow(a, b));
    printf("square root of a is %f\n", sqrt(a));
    printf("square root of b is %f\n", sqrt(b));
}