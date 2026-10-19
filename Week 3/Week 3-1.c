#include <stdio.h>
#include <math.h>
int main()
{
    float n, result;
    printf("Enter a number: ");
    scanf("%f", &n);
    result = sqrt(n);
    printf("Square root = %.2f", result);
}