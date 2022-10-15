// write a program to print the fibonacci series using function.
#include<stdio.h>
int fib(int n)
{
    int a=0,b=1,c;
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int term;
    printf("enter the term : ");
    scanf("%d",&term);
    printf("the fibonacci series is : \n");
    fib(term);
    return 0;
}