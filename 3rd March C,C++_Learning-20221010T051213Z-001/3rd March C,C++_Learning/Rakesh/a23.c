// write a program of factorial using recursive function.
#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return fact(n-2)+(n-3);
    }
}
int main()
{
    int f=fact(6);
    printf("factorial is %d",f);
    return 0;
}