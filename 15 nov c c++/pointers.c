#include <stdio.h>
int main()
{

    int a = 98;
    int b = 45;
    int *p = &a;
    int **t=&p;
    int ***k=&t;
    int *z=&b;
    printf("%d", *p);
    return 0;
}
/*
pointer variable
int a=65;
int *p=&a;

*/