#include <stdio.h>
int main()
{
    int m = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= m; k++)
        {
            printf("* ");
        }
        m++;
        printf("\n");
    }

    return 0;
}