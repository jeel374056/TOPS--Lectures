#include <stdio.h>
int main()
{
    int array1[3][3] = {{48, 96, 85}, {87, 45, 36}, {12, 58, 36}};
    int array2[3][3] = {{48, 96, 85}, {87, 45, 36}, {12, 58, 36}};
    int answer[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            answer[i][j] = array1[i][j] + array2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", answer[i][j]);
        }
        printf("\n");
    }

    return 0;
}