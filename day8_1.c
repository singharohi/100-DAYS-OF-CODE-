#include<stdio.h>
int main() {
    int n;
    char c;
    printf("Enter a character: ");
    scanf("%c",& c);
    if (c>='A' && c<='Z')
        printf("%c Uppercase alphabet",c);
    else if (c>='a' && c<='z')
        printf("%c Lowercase alphabet",c);
    else if (c>='0' && c<='9')
        printf("%c Digit",c);
    else
        printf("%c Special character",c);
    return 0;