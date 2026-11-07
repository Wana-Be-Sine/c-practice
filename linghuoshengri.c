#include <stdio.h>
#include <string.h>
int main(void)
{
    int a, TY, TM, TD, TI;
    scanf("%d", &a);
    int Y[105], M[105], D[105], id[105];
    char N[105][25], TN[25];
    for (int i = 0; i < a; i++)
    {
        id[i] = i;
        scanf("%s %d %d %d", N[i], &Y[i], &M[i], &D[i]);
    }
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - 1 - i; j++)
        {
            if ((Y[j] > Y[j + 1]) ||
                (Y[j] == Y[j + 1] && M[j] > M[j + 1]) ||
                (Y[j] == Y[j + 1] && M[j] == M[j + 1] && D[j] > D[j + 1]) ||
                (Y[j] == Y[j + 1] && M[j] == M[j + 1] && D[j] == D[j + 1] && id[j] < id[j + 1]))
            {
                strcpy(TN, N[j]);
                strcpy(N[j], N[j + 1]);
                strcpy(N[j + 1], TN);
                TY = Y[j + 1]; // 年
                Y[j + 1] = Y[j];
                Y[j] = TY;
                TM = M[j + 1]; // 月
                M[j + 1] = M[j];
                M[j] = TM;
                TD = D[j + 1]; // 日
                D[j + 1] = D[j];
                D[j] = TD;
                TI = id[j]; // 顺序
                id[j] = id[j + 1];
                id[j + 1] = TI;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%s\n", N[i]);
    }
    // 我真是太喜欢代码了
}