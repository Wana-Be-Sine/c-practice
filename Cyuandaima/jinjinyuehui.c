#include<stdio.h>
int main(void)
{
    int A;
    scanf("%d",&A);
    if (A==1||A==3||A==5)
    {
        printf("NO");
    }
    else if (A==2||A==4||A==6||A==7)
    {
        printf("YES");    
    }
}