#include<stdio.h>

int main()
{
    int a=100;
    int *p=&a;
    int **q =&p;
    int ***k=&q;
    // printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*p);
    printf("The value of a is %d\n",**q);
    printf("The value of a is %d\n",***k);
    printf("The value of a is %d\n",&a);
    printf("The value of a is %d\n",&p);
    printf("The value of a is %d\n",&q);
    printf("The value of a is %d\n",&k);

    // printf("The value of a is %u\n",&a);
    // printf("The value of a is %p\n",&a);
    // printf("The value of a is %x\n",&a);
return 0;
}