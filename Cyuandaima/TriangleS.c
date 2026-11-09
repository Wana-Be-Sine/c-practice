#include<stdio.h>
#include<math.h>
int main(void)
{
    double A,B,C,p;
    scanf("%lf %lf %lf",&A,&B,&C);
    p =(A+B+C)/2;
    p =sqrt(p*(p-A)*(p-B)*(p-C));
    printf("%.1lf",p);
}