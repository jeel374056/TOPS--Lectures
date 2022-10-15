#include<stdio.h>
void main()
{
    
    //I3.Write a program to find the Max number from the given three number using Ternary Operators.
    int num1,num2,num3,max;
    printf("ENTER THE VALUE OF NUM1 : ");
    scanf("%d",&num1);
    printf("ENTER THE VALUE OF NUM2 : ");
    scanf("%d",&num2);
    printf("ENTER THE VALUE OF NUM3 : ");
    scanf("%d",&num3);
    max=max=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
    printf("THE LARGEST NUMBER IS %d",max);

}