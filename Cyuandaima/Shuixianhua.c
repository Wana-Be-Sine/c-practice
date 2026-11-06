#include <stdio.h>
int main(void)
{
    for (int a = 100; a <= 999; a++)
    {
        if (a == (a % 10) * (a % 10) * (a % 10) + (a / 10 - (a / 100) * 10) * (a / 10 - (a / 100) * 10) * (a / 10 - (a / 100) * 10) + (a / 100) * (a / 100) * (a / 100))
        {
            printf("%d\n", a);
        }
    }
}