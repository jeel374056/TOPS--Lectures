#include <stdio.h>
int main()
{
    int m = 7;
    for (int i = 0; i < 10; i++)
    {
        if (i < 4)
        {
            if (i < 4)
            {
                for (int j = 0; j < i; j++)
                {
                    printf(" ");
                }
                printf("*");
            }
            for (int k = m; k > 0; k--)
            {
                printf(" ");
            }
            m -= 2;
            printf("*");
            printf("\n");
        }
        else
        {
            for (int l = 0; l < 4; l++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}