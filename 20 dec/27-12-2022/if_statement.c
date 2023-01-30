#include<stdio.h>
int main()
{
int age;
printf("Enter Age: ");
scanf("%d",&age);
if(age>60 && age<150)
{
    printf("You are senior citizen");
}
return 0;
}