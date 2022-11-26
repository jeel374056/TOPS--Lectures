#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i > 0; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// 5 != 5 * 4 * 3 * 2 * 1
// 0 1 1 2 3 5 8