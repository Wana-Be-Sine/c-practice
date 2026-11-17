#include<stdio.h>
#include<ctype.h>
int main()
{
    int L=0,M=0,S=0,T=0;
    char str[1000];
    fgets(str,sizeof(str),stdin);
    for (int i =0;str[i]!='\0' && str[i] != '\n';i++)
    {   
        if (str[i]=='E' && str[i+1]=='O' && str[i+2]=='F' && (str[i+3]=='\n'||str[i+3]=='\0'))
        {
            break;
        }
        if (isalpha(str[i])){
            L++;
        }
        else if(isdigit(str[i])){
            M++;
        }
        else if(str[i]==' '){
            S++;
        }
        else{
            T++;
        }
    }
    printf("%d\n%d\n%d\n%d",L,M,S,T);
    return 0;
}