#include <stdio.h>
int fact = 1;
void showvalue(int a)
{
    fact = fact * a;
    if (a > 1)
    {

        showvalue(a - 1);
    }
}

int main()
{
    showvalue(8);
    printf("%d", fact);
    return 0;
}
/*
factorial=5
5*4*3*2*1=120

*/