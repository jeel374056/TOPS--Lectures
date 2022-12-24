#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 1; k < 6; k++)
            {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }

    return 0;
}