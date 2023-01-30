#include <stdio.h>
int factorial(int n)
{
    if (n > 1)
    {
       return n *factorial(n - 1);
    }
    else if(n==0)
    {
        return 0;
    }
}
int main()
{
    int a;
    a = factorial(8);
    printf("%d",a);

    return 0;
}
/*
whena function calling itself again and again is called recusrion

8

8*7*6*5*4*3*2*1 =

*/