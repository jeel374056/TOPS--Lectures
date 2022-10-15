#include<stdio.h>
void main()
{
      //B8.Write a program to calculate sum of 5 subjects & find the percentage. 
      // Subject marks entered by user
      float c,html,java,paython,mvc;
      float total,percentage;
      printf("ENTER THE MARKS OF C:");
      scanf("%f",&c);
      printf("ENTER THE MARKS OF HTML:");
      scanf("%f",&html);
      printf("ENTER THE MARKS OF JAVA:");
      scanf("%f",&java);
      printf("ENTER THE MARKS OF PAYTHON:");
      scanf("%f",&paython);
      printf("ENTER THE MARKS OF MVC:");
      scanf("%f",&mvc);
      total=c+html+java+paython+mvc;
      percentage=(total/500)*100;
      printf("TOTAL MARKS =%.2f\n",total);
      printf("PERCENTAGE = %.2f",percentage);
}