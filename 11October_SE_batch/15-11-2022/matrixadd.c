#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 9}, {4, 8, 7}, {5, 6, 7}};
    int b[3][3] = {{1, 4, 8}, {8, 9, 5}, {4, 5, 9}};
    printf("A yaha se chalu hai\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("B yaha se chalu hai\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("addition yaha se chalu hai\n");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d  ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}