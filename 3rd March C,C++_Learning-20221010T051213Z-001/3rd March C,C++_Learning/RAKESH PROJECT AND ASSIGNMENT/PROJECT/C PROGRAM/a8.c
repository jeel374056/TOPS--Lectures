// write a program two make substraction of two matrix using 2d array.
#include<stdio.h>
int main()
{
    int m,n,c,d,first[10][10],second[10][10],sub[10][10];
    printf("enter the numberof rows and column \n");
    scanf("%d%d",&m,&n);
    printf("enter the elements of first matrix \n");
    for(c=0;c<n;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&first[c][d]);
        }
    }
    printf("enter the elements of second matrix \n");
    for(c=0;c<n;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&second[c][d]);
        }
    }
    printf("substraction of entered matrix :\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            sub[c][d]=first[c][d]-second[c][d];
            printf("%d\t",sub[c][d]);
        }
      printf("\n");
    }
    return 0;
}