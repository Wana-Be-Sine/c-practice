#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d ", a % 10);
    printf("%d ", a / 10 - (a / 100) * 10);
    printf("%d", a / 100);
}