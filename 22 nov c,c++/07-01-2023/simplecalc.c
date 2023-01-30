#include<stdio.h>
int main()
{
int num1,num2;
char op;
printf("Enter Number1: ");
scanf("%d",&num1);
printf("Enter Symbol: ");
scanf(" %c",&op);
printf("Enter Number2: ");
scanf("%d",&num2);
switch(op)
{
    case '+':
    {
        printf("Answer=%d",num1+num2);
        break;
    }
    case '-':
    {
        printf("Answer=%d",num1-num2);
        break;
    }
    case '*':
    {
        printf("Answer=%d",num1*num2);
        break;
    }
    case '/':
    {
        printf("Answer=%d",num1/num2);
        break;
    }
}
return 0;
}