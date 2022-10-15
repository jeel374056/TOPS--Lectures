#include <stdio.h>
int Fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return Fact (n-2)+(n-3);
    }
}

int main()
{
    int f = Fact(6);
    printf("FActorial is %d", f);
    return 0;
}