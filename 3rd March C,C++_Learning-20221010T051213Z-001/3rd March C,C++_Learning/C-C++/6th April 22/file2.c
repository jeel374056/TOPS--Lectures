#include<stdio.h>

int main()
{
    FILE *p;
    p = fopen("index.txt","r");
    char a[100];
    fscanf(a,100,p);
    printf("The value of a is %s",a);
    fclose(p);
return 0;
}