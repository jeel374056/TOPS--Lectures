#include <stdio.h>
int main()
{
    int k = 0, l = 5;
    for (int i = 1; i <= 5; i++)
    {
        {
            for (int i = 1; i <= k; i++)
            {
                printf(" ");
            }
            k++;
            for (int i = 1; i <= l; i++)
            {
                printf("* ");
            }
            l--;
            printf("\n");
        }
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