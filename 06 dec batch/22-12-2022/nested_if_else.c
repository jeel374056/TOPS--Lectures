#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("A is biggest");
        }
        else
        {
            printf("C is biggest");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b i sbiggest");
        }
        else
        {
            printf("C is biggest");
        }
    }

    return 0;
}