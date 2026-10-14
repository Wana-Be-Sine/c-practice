#include <stdio.h>
int main (void)
{
   int a;
   int b;
   a = 5;
   b = 2;    //第7行
   b = a;   // 第8行
   a = b;    // 第9行
   printf("%d %d\n",b, a); 
   return 0;
 }