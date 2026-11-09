#include<stdio.h>
int main(void)
{
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    A=A*60+B;
    C=C*60+D;
    B=C-A;
    printf("%d %d",B/60,B%60);
}