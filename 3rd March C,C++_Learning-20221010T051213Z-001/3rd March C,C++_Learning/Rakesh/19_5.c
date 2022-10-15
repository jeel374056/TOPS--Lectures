
//WRITE A PROGRAM HAVE TO PRINT FIBONACCI SERIES UP TO USER GIVEN NUMBER.
#include<stdio.h>
void main()
{
    int n,first=0,second=1,next,c;
    printf("enter the number of terms :");
    scanf("%d",&n);
    printf("first %d terms of fibonacci series are :\n",n);
    for(c=0;c<n;c++)
    {
        if(c<=1)
        {
            next=c;
        }
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d\n",next);
    }
}