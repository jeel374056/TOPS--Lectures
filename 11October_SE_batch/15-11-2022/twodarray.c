#include <stdio.h>
int main()
{
    int a[3][2] = {{2, 5}, {5, 6}, {9, 18}};
    // printf("%d", a[0][0]);
    // printf("%d", a[0][1]);
    // printf("%d", a[1][0]);
    // printf("%d", a[1][1]);
    // printf("%d", a[2][0]);
    // printf("%d", a[2][1]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}