#include <stdio.h>
int main()
{
    char add[20];
    int a = 48;
    int *point = &a;
    *point = 50;
    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%p\n", point);
    return 0;
}
/*
pointer is a special variable which stores the reference of another variable address of another variable

* pointername


*/