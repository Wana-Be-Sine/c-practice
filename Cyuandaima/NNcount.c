#include<stdio.h>
int main(void)
{
    int a,t;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        if(i%4==0){
            continue;
        }
        
        t=i;
        int b=0;
        
        while(t>0)
        {
            if(t%10==4){
                b=1;
                break;
            }
            else{
                t/=10;
            }
        }
        
        if(b==1){
            continue;
        }
        printf("%d\n",i);
    }
}