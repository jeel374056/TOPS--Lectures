#include <stdio.h>
int main()
{
    int a;
    printf("enter your age : ");
    scanf("%d", &a);
    if (60 <= a && 100 > a)
    {
        printf("you are seniore citizen");
    }
    else
    {
        if (40 < a && 60 > a)
        {
            printf("you are near to seniore citizen");
        }
        else if (18 <= a && 40 >= a)
        {
            printf("you are a adulte");
        }
        else if (13 <= a && 18 > a)

        {
            printf("your are a teenagers");
        }
        else if (1 <= a && 13 > a)
        {
            printf("you are a children");
        }
        else
        {
            printf("your details is incorrect");
        }
    }

    return 0;
}