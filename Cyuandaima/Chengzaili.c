#include<stdio.h>
int main(void)
{
    double x,a,y,b;
    double z;
    scanf("%lf %lf %lf %lf",&x,&a,&y,&b);
    z = ( y * b - x * a ) / ( b - a );
    printf("%.2f",z);
}