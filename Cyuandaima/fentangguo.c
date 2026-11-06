#include <stdio.h>
int main(void)
{
    int Kid[5], Eated = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &Kid[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        Eated = Eated + Kid[i] % 3;
        Kid[(i + 1) % 5] = Kid[(i + 1) % 5] + Kid[i] / 3;
        Kid[(i + 4) % 5] = Kid[(i + 4) % 5] + Kid[i] / 3;
        Kid[i] = Kid[i] / 3;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", Kid[i]);
    }
    printf("\n%d", Eated);
}