#include<stdio.h>
void main()
  {
      int i,j,k=5,s;
   for(i=1;i<=k;i++)
    {
        for(s=1;s<=i;s++)
        {  
           printf(" ");
        }
        for(j=k;j>=i;j--)
        {
               printf("* ");
        }
            printf("\n"); 
    }
  }