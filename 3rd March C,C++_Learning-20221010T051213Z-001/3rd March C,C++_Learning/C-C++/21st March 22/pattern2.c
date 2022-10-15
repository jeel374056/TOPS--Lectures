//            *
//          * *
//        * * *
//      * * * *
//    * * * * *

#include <stdio.h>

int main()
{
    int row, column, space, n = 5;
    for (row = 1; row <= n; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf(" *");
        }
        for (space = 1; space <= n - row; space++)
        {
            printf("  ");
        }
        printf("\n");
    }

    for (row = 1; row <= n; row++)
    {
        for (space = 1; space <= row; space++)
        {
            printf(" ");
        }
        for (column = 1; column <= n - row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}