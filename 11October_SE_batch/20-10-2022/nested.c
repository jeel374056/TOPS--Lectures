#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter number");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            printf("a is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is greater");
        }
        else
        {
            printf("c is greater");
        }
    }

    return 0;
}