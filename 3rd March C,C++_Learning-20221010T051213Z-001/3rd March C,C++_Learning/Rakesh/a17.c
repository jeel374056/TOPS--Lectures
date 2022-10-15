// write a program to perform addition,substraction,multiplication and division of two numbers using function.

#include<stdio.h>
int add(int n1,int n2);
int sub(int n1,int n2);
int multi(int n1,int n2);
int divi(int n1,int n2);


int add(int n1,int n2)
{
    int result;
    result=n1 + n2;
    return result;
}
int sub(int n1,int n2)
{
    int result;
    result=n1 - n2;
    return result;
}
int multi(int n1,int n2)
{
    int result;
    result=n1 * n2;
    return result;
}
int divi(int n1,int n2)
{
    int result;
    result=n1 / n2;
    return result;
}
int main()
{
    int n1,n2;
    printf("enter the two numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("%d + %d = %d \n",n1,n2,add(n1,n2));
    printf("%d - %d = %d \n",n1,n2,sub(n1,n2));
    printf("%d * %d = %d \n",n1,n2,multi(n1,n2));
    printf("%d / %d = %d \n",n1,n2,divi(n1,n2));
    return 0;
}