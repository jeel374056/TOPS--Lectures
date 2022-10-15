#include<stdio.h>
void main()
{
   // I1.Write a Program to check the given year is leap year or not. 
   int year;
   printf("ENTER THE NUMBER OF YEAR : ");
   scanf("%d",&year);
   if((year %4==0 || year % 400==0)&& year %100 !=0)
   {
       printf("THIS YEAR IS LEAP YEAR");
   }
   else
   {
       printf("THIS YEAR IS NOT LEAP YEAR");
   }
}