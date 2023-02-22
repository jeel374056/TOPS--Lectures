#include <stdio.h>
int main()
{
    int array1[2][3] = {{2, 5, 7}, {9, 3, 1}};
    int array2[3][4] = {{8, 2, 6, 6}, {8, 6, 4, 2}, {6, 5, 2, 5}};
    int answer[2][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            answer[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                // answer[i][j]=answer[i][j]+(array1[i][k]*[array2[k][j]]);
                answer[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", answer[i][j]);
        }
        printf("\n");
    }

    return 0;
}