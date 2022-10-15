#include<stdio.h>
void main()
{
    int i,j,s,k=5;
    for(i=1;i<=k;i++)
    {
        for(s=1;s<=k-i;s++)
        { 
           printf("");
        }
        for(j=i;j>=1;j--)
        {
               printf("%d ",j%2);
        }
            printf("\n"); 
    }
}