#include <stdio.h>
int main(void)
{
    int age;
    scanf("%d", &age);
    long long days = (long long)age * 365;
    printf("Age: %d, Days: %lld", age, days);
}