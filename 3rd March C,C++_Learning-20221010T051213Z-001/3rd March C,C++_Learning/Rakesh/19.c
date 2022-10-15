// WRITE A PROGRAM TO ENTER A FIVE ELEMENTS USING ARRAY AND PRINT IT ON A SCREEN.
#include<stdio.h>
void main()
{
    int i,n,a[100];
    printf("enter size of array :");
    scanf("%d",&n);
    printf("enter %d elements in the array : ",n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements in array are : ");
    for(i=0;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }
}