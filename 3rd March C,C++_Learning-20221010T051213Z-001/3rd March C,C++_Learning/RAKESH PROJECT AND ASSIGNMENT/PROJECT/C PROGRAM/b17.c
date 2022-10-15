#include<stdio.h>
void main()
{
   /* I7.Write a Program of Addition, Subtraction, Multiplication and Division using Switch case.
   (Must Be Menu Driven) */
   int a,b,c,choice;
   printf("ENTER THE VALUE OF A : ");
   scanf("%d",&a);
   printf("ENTER THE VALUE OF B : ");
   scanf("%d",&b);
   printf("ENTER YOUR CHOICE WHICH OPERATION WILL YOU PERFORM\n");
   printf("PLEASE SELECT YOUR OPTION 1 FOR ADDITON\n");
   printf("PLEASE SELECT YOUR OPTION 2 FOR SUBSTRACTION\n");
   printf("PLEASE SELECT YOUR OPTION 3 FOR MULTIPILICATION\n");
   printf("PLEASE SELECT YOUR OPTION 4 FOR DIVISION\n");
   printf("ENTER THE CHOICE : ");
   scanf("%d",&choice);
   switch (choice)
   {
    case 1:
         c=a+b;
         printf("ADDIOTIN OF %d AND %d IS %d",a,b,c);
         break;
    case 2:
         c=a-b;
         printf("SUBSTRACTION OF %d AND %d IS %d",a,b,c);
         break;
    case 3:
         c=a*b;
         printf("MULTIPLICATION OF %d AND %d IS %d",a,b,c);
         break;
    case 4:
         c=a/b;
         printf("DIVISION OF %d AND %d IS %d",a,b,c);
         break;
    default:
         printf(" PLEASE ENTER THE VALID CHOICE");        
         break;
   }
}