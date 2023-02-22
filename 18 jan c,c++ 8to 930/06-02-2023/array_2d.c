#include <stdio.h>
int main()
{
    int array1[2][3] = {{47, 85, 48}, {69, 54, 78}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number: %d %d :", i, j);
            scanf("%d", &array1[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
datatype arrayname[row][column]={{values},{vlaues},{values}}





*/