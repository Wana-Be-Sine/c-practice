#include<stdio.h>
int main(void)
{
    double A,B;
    scanf("%lf",&A);
    scanf("%lf",&B);
    printf("%.3f%%", (B / A) * 100 );
}