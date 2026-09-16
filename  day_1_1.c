#include<stdio.h>
int main() {
    int a, b;

    printf(" Enter first integer: ");
    scanf("%d", &a);
    printf(" Enter second integer: ");
    scanf("%d", &b);

    int sum;
    sum = a + b;

    printf(" Sum of %d and %d is: %d", a, b, sum);

    return 0;
}