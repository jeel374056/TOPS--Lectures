#include <stdio.h>
int main()
{
    int m = 4, n = 1, u = 1, v = 4;
    for (int i = 1; i <= 10; i++)
    {
        if (i < 6)
        {
            for (int j = 1; j <= m; j++)
            {
                printf(" ");
            }
            m--;
            for (int k = 1; k <= n; k++)
            {
                printf("* ");
            }
            n++;
        }
        else
        {
            for (int k = 1; k <= u; k++)
            {
                printf(" ");
            }
            u++;
            for (int j = 1; j <= v; j++)
            {
                printf("* ");
            }
            v--;
        }
        printf("\n");
    }

    return 0;
}