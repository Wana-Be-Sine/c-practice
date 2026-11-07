#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    int arr[a],temp;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < a-1; i++){
        for (int j=0;j<a-1-i;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
        for (int i = 0; i < a; i++){
        printf("%d ", arr[i]);
        }
}