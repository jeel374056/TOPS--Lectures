#include<stdio.h>
void main()
{
    /*I5.Write a program user enter the 5 subjects mark. 
    You have to make a total and find the percentage.
    Percentage > 75 you have to print “Distinction”
    Percentage > 60 and percentage <= 75 you have to print “First class” 
    Percentage >50 and percentage <= 60 you have to print “Second class”
    Percentage > 35 and percentage <= 50 you have to print “Pass class” Otherwise print “Fail”*/
     float c,html,java,paython,mvc;
      float total,per;
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
      per=(total/500)*100;
      printf("TOTAL MARKS =%.2f\n",total);
      printf("PERCENTAGE = %.2f",per);
      printf("\n*****RESULT*****\n");
      if(per>75)
      {
          printf("DISTINCTION");
      }
      else if(per>=60 && per<=75)
      {
          printf("FIRST CLASS");
      }
       else if(per>=50 && per<=60)
      {
          printf("SECOND CLASS");
      }
       else if(per>=35 && per<=50)
      {
          printf("PASS CLASS");
      }
       else if(per<=35)
      {
          printf("FAIL");
      }
      printf("\n*****RESULT*****\n");
}