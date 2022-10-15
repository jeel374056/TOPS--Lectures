#include<stdio.h>

int main()
{
    int a=13,b=23,c=20;
    (a>b) ? ((a>c)? printf("%d",a):printf("%d",c)):((b>c)? printf("%d",b):printf("%d",c));
return 0;
}