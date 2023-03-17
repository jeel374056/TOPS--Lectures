#include <stdio.h>
int main()
{

    int a = 65;
    int *point = &a;
    *point = 89;
    // printf("%p", *point);
    // printf("%p", &a);
    printf("%d", a);
    return 0;
}
/*
pointer variable is a special variable
Pointer variable stores the address of another variable
if we change the value of pointer then value of variable is changed

datatype_variable *pointername=&variablename;
&----address of variable

*/