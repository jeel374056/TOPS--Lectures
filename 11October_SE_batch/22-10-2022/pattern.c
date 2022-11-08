#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i < 6; ++i)
    {
        for (j = 0; j < i; ++j)
        {
            printf(" %d ", j + 1);
        }
        printf("\n");
    }

    return 0;
}

// 0 1 1 2 3 5 8