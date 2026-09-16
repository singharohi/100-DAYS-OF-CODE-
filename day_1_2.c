#include<stdio.h>
int main() {

    int a, b;

    printf(" Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    int sum;
    sum = a + b;

    int difference;
    difference = a - b;
    
    int product;
    product = a * b;

    int quotient;
    quotient = a / b;

    printf(" Sum of a and b is: %d\n", sum);
    printf(" Difference of a and b is: %d\n", difference);
    printf(" Product of a and b is: %d\n", product);
    printf(" Quotient of a and b is: %d\n", quotient);

    return 0;
}
    



