#include<stdio.h>
int main(void)
{
    int int_len,long_len,short_len,char_len;
    int_len= sizeof(int);
    long_len= sizeof(long);
    short_len= sizeof(short);
    char_len= sizeof(char);
    printf("%d\n", int_len);
    printf("%d\n", long_len);
    printf("%d\n", short_len);
    printf("%d\n", char_len);
    return 0;
}