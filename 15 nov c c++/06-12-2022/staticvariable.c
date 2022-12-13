#include <stdio.h>
#define pi 3.14;
void addition()
{
    static int m = 45;
    const int a = 30;
    printf("a=%d", m);
    m++;
    // a=98;
}
int main()
{
    addition();
    addition();
    addition();
    return 0;
}