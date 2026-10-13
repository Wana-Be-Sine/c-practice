#include<stdio.h>
int main()
{
    unsigned int num1 = 4294967295;
    short num2 = 32767;
    long num3 = 2147483647;
    printf("num1=%u and not %d \n",num1,num1);
    printf("num2=%hd and %d \n",num2,num2);
    printf("num3=%ld and not %hd \n",num3,num3);
    return 0;
}