#include<stdio.h>
int main(void)
{
    char str[6];
    scanf("%s",str);
    for (int i=4;i>=0;i--){
        printf("%c",str[i]);
    }
}