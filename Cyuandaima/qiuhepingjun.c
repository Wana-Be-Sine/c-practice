#include <stdio.h>
int main(void)
{
    int n, sum;
    sum = 0;
    double avg;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d ", sum);
    avg = (double)sum / n;
    printf("%.2f", avg);
}