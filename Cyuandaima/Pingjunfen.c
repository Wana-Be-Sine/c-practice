#include<stdio.h>
int main(void)
{
    double A,B,C,AVG;
    scanf("%lf %lf %lf",&A,&B,&C);
    AVG = ( A + B + C ) / 3;
    printf("%f %.1f %.3f\n",AVG,AVG,AVG);
    printf("%.1f\n",(int)(AVG * 10 + 0.5) / 10.0);
    printf("%f %.2f %.20lf",AVG,AVG,AVG);
}