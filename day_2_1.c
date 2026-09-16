#include<stdio.h>
int main() {
    int length = 12, breadth = 34;

    int Area = length * breadth;
    int Perimeter = 2 * (length + breadth);

    printf("The area of the rectangle is: %d\n", Area);
    printf("The perimeter of the rectangle is: %d\n", Perimeter);

    return 0;
}
