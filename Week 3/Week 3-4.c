#include <stdio.h>
int main()
{
    float speed, time, distance;
    printf("Enter speed(m/s) and time(sec): ");
    scanf("%f%f", &speed,&time);
    distance = speed * time;
    printf("Distance travelled = %.2f", distance);
}