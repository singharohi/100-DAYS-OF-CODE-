#include<stdio.h>
int main() {
    int n;

    printf("Enter the percentage : ");
    scanf("%d",&n);
    if (n>=90 && n<=100)
        printf("%d Grade A",n);
    else if (n>=80 && n<=89)
        printf("%d Grade B",n);
    else if (n>=70 && n<=79)
        printf("%d Grade C",n);
    else if (n>=60 && n<=69)
        printf("%d Grade D",n);
    else
        printf("%d Grade F",n);
    return 0;
}