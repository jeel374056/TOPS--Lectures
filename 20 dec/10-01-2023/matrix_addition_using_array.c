#include <stdio.h>
int main()
{
    int array1[3][3], array2[3][3], answer[3][3];
    printf("ARRAY1 Input\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Elements: ");
            scanf("%d", &array1[i][j]);
        }
    }
    printf("ARRAY2 Input\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Elements: ");
            scanf("%d", &array2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            answer[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                // answer[i][j] = array1[i][J] + array2[i][j];
                answer[i][j] += array1[i][k] * array2[k][j];
                // answer[i][j]=answer[i][j]+array1[i][k]*array2[k][j];
            }
            printf("%d ", answer[i][j]);
        }
        printf("\n");
    }

    return 0;
}