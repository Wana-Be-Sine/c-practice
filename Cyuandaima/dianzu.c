#include<stdio.h>
int main(void)
{
    double R1,R2;
    scanf("%lf %lf",&R1,&R2);
    printf("%.2f", 1 / (1 / R1 + 1 / R2 ));
}