#include<stdio.h>

int main()
{
    FILE *p;
    p = fopen("index.txt","w");
    int a=3;
    fprintf(p,"The value of a is %d",a);
    fclose(p);
return 0;
}