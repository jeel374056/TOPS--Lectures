// write a program of two make additio of two matrix using 2d array.
#include<stdio.h>
int main()
{
    int disp[2][3];
    int i,j,sum=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter value for dis[%d][%d] :",i,j);
            scanf("%d",&disp[i][j]);
        }
    }
    printf("two dimensional array elements : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d",disp[i][j]);
        if(j==2)
        {
            printf("\n");
        }
        }
    }
     i=0;
        for(i=0;i<2;i++)
        {
        for(j=0;j<3;j++)
        {
            sum=sum+disp[i][j];
           
        }
       
        }  printf("%d",sum);
        return 0;
}