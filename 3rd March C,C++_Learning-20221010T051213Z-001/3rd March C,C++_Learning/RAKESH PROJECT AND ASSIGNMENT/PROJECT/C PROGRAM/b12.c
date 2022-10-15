#include<stdio.h>
void main()
{
   // I2.Write a Program to check the given number is prime or not prime.
   int n,i,flag=0;
   printf("ENTER A POSITIVE INTEGER : ");
   scanf("%d",&n);
   for(i=2;i<=n/2;++i)
   {
       if(n%i==0)
       {
           flag=1;
           break;
       }
   }
   if(n==1)
   {
       printf("1 IS NEITHER PRIME NOR COMPOSITE.");
   }
   else
   {
       if(flag==0)
       {
           printf("%d IS A PRIME NUMBER ",n);
       }
       else
       {
           printf("%d IS NOT A PRIME NUMBER ",n);
       }
   }
}