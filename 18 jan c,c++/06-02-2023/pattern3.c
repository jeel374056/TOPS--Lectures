#include <stdio.h>
int main()
{
    int p = 0, q = 5, r = 1, s = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int i = 1; i <= p; i++)
        {
            printf(" ");
        }
        p++;
        for (int i = 1; i <= q; i++)
        {
            printf("* ");
        }
        q--;
        for (int i = 1; i <= r; i++)
        {
            printf("  ");
        }
        r++;
        for (int i = 1; i <= s; i++)
        {
            printf("* ");
        }
        s--;
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
4 s 1 * 5 s 1 *

*/