#include<stdio.h>

int main()
{
    int a=10,b =20,c,choice;
    printf("Enter your choice\n");
    printf("Please choose option 1 for addition\n");
    printf("Please choose option 2 for Subtraction\n");
    printf("Please choose option 3 for Multiplication\n");
    printf("Please choose option 4 for Division\n");
    printf("Your choice is ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        c = a+b;
        printf("Addtion of both values is %d",c);
        break;
    case 2:
        c = a-b;
        printf("Subtraction of both values is %d",c);
        break;
    case 3:
        c = a*b;
        printf("Multiplication of both values is %d",c);
        break;
    case 4:
        c = a/b;
        printf("Division of both values is %d",c);
        break;
    
    default:
        printf("Enter valid choice");
        break;
    }
return 0;
}