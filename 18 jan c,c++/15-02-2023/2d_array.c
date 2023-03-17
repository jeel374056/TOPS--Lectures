#include <stdio.h>
int main()
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Value: ");
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
int arrayname[rows][cols];
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        arrayname[i][j];
    }
}

*/