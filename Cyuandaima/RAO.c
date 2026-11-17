#include<stdio.h>
#include<ctype.h>
int main()
{
    double Entered_num,END;
    char LEIA,LEIB;
    printf("请精确至小数点后两位:");
    scanf("%lf",&Entered_num);
    printf("\n输入的类型是?人民币(C)美元(U)欧元(E):");
    scanf(" %c",&LEIA);
    LEIA = toupper(LEIA);
    long long zheng =(long long)(Entered_num *100+0.5);
    printf("\n输出的类型是?人民币(C)美元(U)欧元(E):");
    scanf(" %c",&LEIB);
    LEIB = toupper(LEIB);
    switch (LEIA)
    {
    case 'C':
        switch (LEIB)
        {
        case 'C':
            END = zheng*1;
            printf("盯...");
            break;
        case 'U':
            END = zheng*15 /100;
            break;
        case 'E':
            END = zheng*13 / 100;
            break;
        default:
            printf("输入错误");
            return 1 ;
        }
        break;
    case 'U':
        switch (LEIB)
        {
        case 'C':
            END = zheng* 667 /100;
            break;
        case 'U':
            END = zheng*1;
            printf("盯...");
            break;
        case 'E':
            END = zheng* 89 /100;
            break;
        default:
            printf("输入错误");
            return 1;
        }
        break;
    case 'E':
        switch (LEIB)
        {
        case 'C':
            END = zheng*746 /100;
            break;
        case 'U':
            END =zheng *112 /100;
            break;
        case 'E':
            END =zheng *1;
            printf("盯...");
            break;
        default:
            printf("输入错误");
            return 1;
        }
        break;
    
    default:
        printf("输入错误");
        return(1);
    }
    printf("%.2f",END / 100);
    switch (LEIB)
    {
        case 'C':
            printf("¥");
            break;
        case 'U':
            printf("$");
            break;
        case 'E':
            printf("€");
            break;
        default:
            break;
    }
    return 0;
}