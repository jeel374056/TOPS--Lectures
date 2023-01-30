#include <stdio.h>
void recursion(int n)
{
    printf("%d", n);
    if (n > 0)
    {
        recursion(n - 1);
    }
}
int main()
{
    recursion(6);

    return 0;
}
/*
whena function calling itself again and again is called recusrion

8

8*7*6*5*4*3*2*1 =

*/