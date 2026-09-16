#include<stdio.h>
int main() {
    int n;
    printf("Enter a integer : ");
    scanf("%d",&n);
    if (n>0)
        printf("%d is a positive number",n);
    else if (n<0) {
        printf("%d is a negative number",n);
    }
    else {
        printf("%d is a zero number",n);
    }
    return 0;

}