#include<stdio.h>
void main()
{
    /*B2.Write a program to make addition, Subtraction, Multiplication and Division of Two
    Numbers. */

    int a,b,c,choice;
    printf("ENTER THE VALUE OF A = ");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B = ");
    scanf("%d",&b);
    printf("ENTER YOUE CHOICE WHICH OPERATION WILL YOU PERFORM\n");
    printf("PLEASE SELECT OPTION 1 FOR ADDITION\n");
    printf("PLEASE SELECT OPTION 2 FOR SUBTRACTION \n");
    printf("PLEASE SELECT OPTION 3 FOR MULTIPLICATION\n");
    printf("PLEASE SELECT OPTION 4 FOR DIVISION\n");
    printf("PLEASE SELECT YOUR CHOICE = ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
            c=a+b;
            printf("ADDITION OF BOTH VALUE IS %d",c);
        break;
    case 2:
            c=a-b;
            printf("SUBSTRACTION OF BOTH VALUE IS %d",c);
        break;
    case 3:
            c=a*b;
            printf("MULTIPLICATION OF BOTH VALUE IS %d",c);
        break;
    case 4:
            c=a/b;
            printf("DIVISION OF BOTH VALUE IS %d",c);
        break;
    default:
            printf("ENTER THE VALID CHOICE");
        break;
    }
    

}


