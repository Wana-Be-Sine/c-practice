#include<stdio.h>
#include<limits.h>
int main(void)
{
    int A;
    short B;
    long C;
    scanf("%d %hd %ld",&A,&B,&C);
    printf("%d %hd %ld\n",A,B,C);
    printf("%d %d\n",INT_MIN,INT_MAX);
    printf("%d %d\n",SHRT_MIN,SHRT_MAX);
    printf("%ld %ld\n",LONG_MIN,LONG_MAX);
    printf("%d %d %d",sizeof(int),sizeof(short),sizeof(long));
}