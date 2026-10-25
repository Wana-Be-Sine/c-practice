#include<stdio.h>
int main(void)
{
    int age;
    scanf("%d",&age);
    int days;
    days = age * 365;
    printf("Age: %d, Days: %d",age,days);
}