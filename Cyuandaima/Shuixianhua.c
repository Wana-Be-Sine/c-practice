#include <stdio.h>
int main(void)
{
    for (int a = 100; a <= 999; a++)
    {
        int hundreds = a / 100;
        int tens = a / 10 % 10;
        int ones = a % 10;
        if (a == ones * ones * ones + tens * tens * tens + hundreds * hundreds * hundreds)
        {
            printf("%d\n", a);
        }
    }
}