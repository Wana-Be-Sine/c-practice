#include <stdio.h>
struct student{
    char N[25];
    int Y,M,D;
    int id;
};
int main(void)
{
    struct student stu[105];
    struct student temp;
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%s %d %d %d", stu[i].N, &stu[i].Y, &stu[i].M, &stu[i].D);
        stu[i].id = i;
    }
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - 1 - i; j++)
        {
            if ((stu[j].Y >  stu[j + 1].Y) ||
                (stu[j].Y == stu[j + 1].Y && stu[j].M >  stu[j + 1].M) ||
                (stu[j].Y == stu[j + 1].Y && stu[j].M == stu[j + 1].M && stu[j].D >  stu[j + 1].D) ||
                (stu[j].Y == stu[j + 1].Y && stu[j].M == stu[j + 1].M && stu[j].D == stu[j + 1].D && stu[j].id < stu[j + 1].id))
            {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;

            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%s\n", stu[i].N);
    }
    // 我真是太喜欢代码了
}