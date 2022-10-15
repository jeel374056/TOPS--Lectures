//WRITE A PROGRAM YOU HAVE TO PRINT TABLE OF GIVEN NUMBER.
#include<stdio.h>
void main()
{
    int num,i;
    printf("enter the number to genrate the table in program : ");
    scanf("%d",&num);
    printf("\n table of %d",num);
    for(i=1;i<=10;i++)
    {
        printf("\n %d * %d = %d",num,i,num*i);
    }
}
