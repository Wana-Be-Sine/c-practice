#include<stdio.h>
int main(void)
{
    int A;
    _Bool B;
    scanf("%d",&A);
    B = A;
    A = B;
    printf("%d",A);
}