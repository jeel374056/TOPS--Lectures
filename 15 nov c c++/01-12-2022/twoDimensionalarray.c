#include <stdio.h>
int main()
{
    int array1[3][4][5] = {{1, 2, 3, 4}, {7, 8, 9, 6}, {4, 8, 2, 1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*

datatype arrayname[max_size][max_size]={{value1,value2,value3},{vlaue1,value2,value3...},{value1,value2,value3....}};
*/