 /* I8.Write a program of to find out the Area of Triangle, Rectangle and Circle using If Condition.
    (Must Be Menu Driven)*/
    

#include<stdio.h>
#define PI 3.14
void main()
{
    int choice;
    printf("PLEASE ENTER THE 1 TO FIND AREA OF TRIANGLE\n");
    printf("PLEASE ENTER THE 2 TO FIND AREA OF RECTANGLE\n");
    printf("PLEASE ENTER THE 3 TO FIND AREA OF CIRCLE\n");
    printf("ENTER YOUR CHOICE WICH TASK YOU PERFORM :");
    scanf("%d",&choice);
    if(choice==1)
    {
        int height,base;
        float area;
        printf("ENTER THE HEIGHT OF THE TRIANGLE : ");
        scanf("%d",&height);
        printf("ENTER THE BASE OF THE TRIANGLE : ");
        scanf("%d",&base);
        area=(height*base)/(float)2;
        printf("THE AREA OF TRIANGLE IS : %f",area);
    }
    else if(choice==2)
    {
        int length,breadth,area;
        printf("ENTER THE LENGTH OF RECTANGLE : ");
        scanf("%d",&length);
        printf("ENTER THE BREADTH OF RECTANGLE : ");
        scanf("%d",&length);
        area=length*breadth;
        printf("AREA OF RECTANGLE : %d",area);
    }
    else if(choice==3)
    {
        float radius,area;
        printf("ENTER RADIUS OF CIRCLE :-");
        scanf("%f",&radius);
        area=PI*radius*radius;
        printf("AREA OF CIRCLE :- %0.4f\n",area);
    }
    else if(choice>=4)
    {
        printf("PLEASE ENTER THE VALID CHOICE");
    }
}