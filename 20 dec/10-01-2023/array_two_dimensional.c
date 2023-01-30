#include <stdio.h>
int main()
{
    int array[3][3];
    for (int i = 0; i < 3; i++) // for rows =3
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter Elements: ");
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) // for rows =3
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
2d array

int arr[3][4]={{14,15,12,36},{48,78,96,32},{14,56,25,14}};


*/