//WRITE A PROGRAM YOU HAVE TO FIND THE FACTORIAL OF GIVEN NUMBER.

#include<stdio.h>
void main()
{
    int i,fact=1,n;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("FACTORIAL OF %d IS : %d",n,fact);
}  