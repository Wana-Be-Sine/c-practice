#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d", &a);
    for (b = 0; a != 0; a--)
    {
        for (int i = a; i != 0; i--)
        {
            b = i + b;
        }
    }
    printf("%d", b);
}