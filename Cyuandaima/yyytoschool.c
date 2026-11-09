#include<stdio.h>
int main(void)
{
    int s,v;
    scanf("%d %d",&s,&v);
    int w,t;
    w=(s + v - 1) / v+10;
    t=480-w;
    if (t<0){
        t=t+1440;
    }
    printf("%02d:%02d",t/60,t%60);
}