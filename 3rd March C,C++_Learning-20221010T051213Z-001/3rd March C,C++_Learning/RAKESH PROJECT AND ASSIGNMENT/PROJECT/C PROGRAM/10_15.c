#include<stdio.h>
void main()
{
    int i,j,k=7;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=k;j++)
        {
        if(i==4 && j==4 || i==5 && j==5 || i==5 && j==4 || i==5 && j==3 || i==6 && j==2||i==6 && j==3||i==6 && j==4||i==6 && j==5|| i==6 && j==6 )
        {
            printf(" ");
        }
        else
        {
            printf("*");
        }
        } 
        printf("\n");
    }
  
}