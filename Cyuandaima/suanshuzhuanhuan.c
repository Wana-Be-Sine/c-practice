#include <stdio.h>
int main(void)
{
    int A, B;
    float C;
    scanf("%d %d", &A, &B);
    scanf("%f", &C);
    printf("%d\n", A / B);
    printf("%.2f\n", (float)A / B);
    printf("%d\n", A % B);
    printf("%.2f", (C * A) + B / 3.0);
}