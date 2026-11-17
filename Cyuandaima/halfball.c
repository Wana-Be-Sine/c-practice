#include<stdio.h>
int main()
{
    double sum=100;
    double next = 100;
    for (int i =0;i<9;i++){
        next = next / 2;
        sum = sum + 2*next;
    }
    printf("%lf\n",sum);
    printf("%lf",next);
}