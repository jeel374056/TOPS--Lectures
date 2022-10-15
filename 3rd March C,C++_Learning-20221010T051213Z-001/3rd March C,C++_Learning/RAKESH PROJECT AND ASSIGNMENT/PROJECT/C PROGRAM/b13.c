#include<stdio.h>
void main()
{
    //I3.Write a program to find the Max number from the given three number using Nested If.
    
    int num1,num2,num3;
    printf("ENTER THE VALUE OF NUM1 : ");
    scanf("%d",&num1);
    printf("ENTER THE VALUE OF NUM2 : ");
    scanf("%d",&num2);
    printf("ENTER THE VALUE OF NUM3 : ");
    scanf("%d",&num3);
    if(num1>=num2)
    {
        if(num1>=num3)
        {
            printf(" NUM1 %d is largest",num1);
        }
        else
        {
            printf("NUM3 %d is largest",num3);
        }
    }
    else
    {
        if(num2>=num3)
        {
            printf("NUM2 %d is largest",num2);
        }
        else
        {
            printf("NUM3 %d is largest",num3);
        }
    }
}