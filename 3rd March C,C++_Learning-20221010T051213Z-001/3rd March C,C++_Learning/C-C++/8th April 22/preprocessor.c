#include<stdio.h>
#include "myfile.h"

int main()
{
    printf("The value of z is %d\n",z);
    printf("The value of d is %.2f\n",d);
    printf("The value of string is %s\n",s);
    int fun = Add(3,4);
    printf("Addition is %d",fun);
return 0;
}