// sizeof(variablename)
// \\* pointer
// variable * variable
// *variable pointer
// &
// && logical operator
// & bitwise and
#include <stdio.h>
int main()
{
    int a = 69;
    int *p = &a;
    printf("%p", p);
    return 0;
}