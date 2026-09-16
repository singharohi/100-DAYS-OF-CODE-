#include <complex.h>
#include<stdio.h>
#include<math.h>
int main() {
    float P,R,T,Simple_Interest,Compound_Interest;
    printf("Enter P,R,T : ");
    scanf("%f %f %f",&P,&R,&T);
    Simple_Interest = P * R *T/100;
    Compound_Interest = P * pow(1 + R / 100, T)-P;
    printf("Simple Interest = %.f\n",Simple_Interest);
    printf("Compound Interest = %.2f\n",Compound_Interest);
    return 0;
}