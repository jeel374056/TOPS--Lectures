#include<stdio.h>
void main()
{
   // I6. Write Program use switch statement. Display Monday to Sunday.
   int choice;
   printf("ENTER THE CHOICE : ");
   scanf("%d",&choice);
   switch (choice)
   {
    case 1:
         printf("MONDAY");
         break;
    case 2:
         printf("TUESDAY");
         break;
    case 3:
         printf("WEDNESDAY");
         break;
    case 4:
         printf("THURSDAY");
         break;
    case 5:
         printf("FRIDAY");
         break;
    case 6:
         printf("SATURDAY");
         break;
    case 7:
         printf("SUNDAY");
         break;
   default:
         printf(" PLEASE ENTER THE VALID CHOICE");        
         break;
   }
}