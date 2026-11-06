#include <stdio.h>
int main(void)
{
    char a = 42;
    int b;
    scanf("%d", &b);
    b = b + 1;
    for (int i = 1; i != b; ++i)
    {
        for (int c = b - i; c != 1; c--)
        {
            printf(" ");
        }
        for (int c = i; c != 0; c--)
        {
            printf("%c", a);
        }
        for (int c = i - 1; c != 0; c--)
        {
            printf("%c", a);
        }
        printf("\n");
    }
}