//  * * * * *
//  * * * *
//  * * *
//  * *
//  *

#include <stdio.h>

int main()
{
    int row, column, n = 5;
    for (row = 1; row <= n; row++)
    {
        for (column = n; column >= row; column--)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}