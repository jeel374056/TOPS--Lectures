#include <stdio.h>
int main()
{
    int k = 4, l = 1, m = 1, n = 4;
    for (int i = 1; i <= 9; i++)
    {
        if (i < 6)
        {
            for (int i = 1; i <= k; i++)
            {
                printf(" ");
            }
            k--;
            for (int i = 1; i <= l; i++)
            {
                printf("* ");
            }
            l++;
        }
        else
        {
            for (int i = 1; i <= m; i++)
            {
                printf(" ");
            }
            m++;
            for (int i = 1; i <= n; i++)
            {
                printf("* ");
            }
            n--;
        }
        printf("\n");
    }

    return 0;
}
/*
* * * * * * * * * * *
* * * * *   * * * * *
 * * * *     * * * *
  * * *       * * *
   * *         * *
    *           *
0 s 5 * 1 s 5 *
1 s 4 * 2 s 4 *
2 s 3 * 3 s 3 *
3 s 2 * 4 s 2 *
4 s 1 * 5 s 1

*/