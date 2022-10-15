// write a program to find out max number from matrix.
#include<stdio.h>
int main()
{
    int mat[3][3],i,j,max;
    printf("enter the matrix value :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    max=mat[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(max<mat[i][j])
            max=mat[i][j];
        }
    }
    printf("\n maximum elements =%d",max);

}