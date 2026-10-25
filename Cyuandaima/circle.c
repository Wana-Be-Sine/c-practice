#include<stdio.h>
int main(void)
{
    double r;
    scanf("%lf",&r);
    printf("%.4f ", 2 * r );
    printf("%.4f ", 2 * r * 3.14159 );
    printf("%.4f", 3.14159 * r * r );
}