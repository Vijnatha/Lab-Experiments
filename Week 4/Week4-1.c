#include <stdio.h>
int main()
{
    int A, B, C, D, E, F, G,J,i ,result1,result2,result3 ,result4;
    printf("Enter A, B, C, D, E, F, G: ");
    scanf("%d%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F, &G);
    result1 = A + B*C + (D*E) + F*G;
    printf("\nA + B*C + (D*E) + F*G= %d", result1);
    result2=A/B*C-B+A*D/3;
    printf("\nA/B*C-B+A*D/3=%d",result2);
    result3= A+++B---A;
    printf("\nA+++B---A=%d",result3);
    result4=J= (i++) + (++i);
    printf("\n(i++) + (++i)=%d",result4);
}