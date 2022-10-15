#include<stdio.h>
void main()
{
    //B5. Write a program to find the Area of Triangle

    int height,base;
    float area;
    printf("ENTER THE HEIGHT OF THE TRIANGLE : ");
    scanf("%d",&height);
    printf("ENTER THE BASE OF THE TRIANGLE : ");
    scanf("%d",&base);
    area=(height*base)/(float)2;
    printf("THE AREAOF TRIANGLE IS : %f",area);
}