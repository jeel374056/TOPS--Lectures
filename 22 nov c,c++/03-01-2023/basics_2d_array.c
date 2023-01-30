#include <stdio.h>
int main()
{
    int array[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter Number: ");
            scanf("%d ", &array[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", array[i][j]);
        }
    }
    return 0;
}

/*
int array[3][3];
printf("Enter number :");
scanf("%d",&number);
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("Enter number :");
scanf("%d",&array[3][3]);
    }
}
*/