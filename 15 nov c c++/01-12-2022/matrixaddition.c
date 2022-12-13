#include <stdio.h>
int main()
{
    int array1[3][3], array2[3][3], answer[3][3];
    printf("Array1 Input\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for position %d %d : ", i, j);
            scanf("%d ", &array1[i][j]);
        }
    }
    printf("Array2 Input\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for position %d %d : ", i, j);
            scanf("%d ", &array2[i][j]);
        }
    }
    printf("Array1 output\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    printf("Array2 output\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
    printf("Answer output\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            answer[i][j] = array1[i][j] + array2[i][j];
            printf("%d", answer[i][j]);
        }
        printf("\n");
    }

    return 0;
}