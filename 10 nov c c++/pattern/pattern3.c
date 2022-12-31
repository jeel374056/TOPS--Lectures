#include <stdio.h>
int main()
{
    int i, j, k, m = 4, n = 1;
    for (i = 1; i <= 5; i++)
    {
        if (i != 5)
        {
            for (j = 0; j < m; j++)
            {
                printf(" ");
            }
            m--;
            printf("*");
            if (i != 1)
            {
                for (k = 0; k < n; k++)
                {
                    printf(" ");
                }
                n += 2;
                printf("*");
            }
        }
        else
        {
            for (int t = 0; t < 5; t++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}