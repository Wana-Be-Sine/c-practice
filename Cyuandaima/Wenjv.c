#include<stdio.h>
int main(void)
{
    float A,B;
    scanf("%f %f",&A,&B);
    A=A+B/10;
    B=1.9;
    int C=A/B;
    printf("%d",C);
}