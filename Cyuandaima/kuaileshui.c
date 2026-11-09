#include<stdio.h>
int main(void)
{
    double t;
    int n;
    scanf("%lf %d",&t,&n);
    n=2*n;
    printf("%.3lf\n%d",2*t/n,n);
}