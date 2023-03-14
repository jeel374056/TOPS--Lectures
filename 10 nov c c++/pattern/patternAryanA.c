#include <stdio.h>
int main()
{
    int n = 1;
    for (int i = 6; i >= 0; i--)
    {
        if (i != 3) //first half of the pattern
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
            printf("*");
            for (int k = 0; k < n; k++)
            {
                printf(" ");
            }
            printf("*");

            n = n + 2;
            printf("\n");
        }
        else
        {
            for (int m = 0; m < 3; m++)
            {
                printf(" ");
            }
            for (int u = 0; u < 5; u++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}