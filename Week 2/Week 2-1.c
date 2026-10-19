#include<stdio.h>
int main()
{
int a,b,c,S;
float A;
printf("Enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
S=a+b+c;
printf("\nSum of three numbers is %d",S);
A=S/3;
printf("\nThe average of three numbers is %f",A);
}
