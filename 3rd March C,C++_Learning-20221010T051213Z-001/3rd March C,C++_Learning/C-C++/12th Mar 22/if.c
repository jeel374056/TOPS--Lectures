#include <stdio.h>

int main()
{
    int a = 10, b = 6, c = 40;
    if (a > b)
    {
        if (a > c)
        {
            printf("A is greater");
        }
        else
        {
            printf("C is greater");
        }
    }
    else
    {
        if (b > c)
        {
            printf("B is greater");
        }
        else
        {
            printf("C is greater");
        }
    }
    return 0;
}