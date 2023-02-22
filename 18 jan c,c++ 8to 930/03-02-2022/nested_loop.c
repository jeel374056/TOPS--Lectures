#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++) 
        {
            printf("Enter number: ");
            scanf("%d",&array1[i][j])
        }
    }
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++) 
        {
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}