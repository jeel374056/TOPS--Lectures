#include<stdio.h>
void main()
{
    int i,j,s,k;
    k=1;
    for(i=1;i<=5;i++)
    {
        for(s=1;s<=k-i;s++)
        { 
           printf("");
        }
        for(j=1;j<=i;j++)
        {
               printf("%d ",k++);
        }
            printf("\n"); 
    }
}