
/*
take input of array form user and print table of elements of array
*/
#include<stdio.h>
int main()
{
int num;
printf("Enter Number: ");
scanf("%d",&num);
for(int i=1;i<=10;i++)
{
    printf("%d X %d =%d\n",num,i,num*i);
}

return 0;
}