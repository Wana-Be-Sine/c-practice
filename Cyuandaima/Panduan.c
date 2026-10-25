#include<stdio.h>
int main(void)
{
    int A;
    scanf("%d",&A);
    if (A>0){
        printf("positive");
    }else if (A==0){
        printf("zero");
    }else{
        printf("negative");
    }
}