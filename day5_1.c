#include<stdio.h>
int main() {
    int Time_In_Seconds,hours,minutes,seconds;
    printf("Enter the Time in seconds : ");
    scanf("%d",&Time_In_Seconds);
    hours = Time_In_Seconds / 3600;
    minutes = (Time_In_Seconds % 3600) / 60;
    seconds = (Time_In_Seconds % 3600) % 60;
    printf("%d:%d:%d:",hours,minutes,seconds);
    return 0;

}