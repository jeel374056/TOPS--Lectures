#include<stdio.h>
int fib1(int a)
{
    if(a==0)
    {
        return 0;
    }
    else if(a==1)
    {
     return 1;
    }
    else
    {
        return fib1(a-1)+fib1(a-2);
    }
}
int main()
{
    int fib,ans;
    printf("Enter No:");
    scanf("%d",&fib);
    for(int i=0;i<fib;i++)
    {
        ans=fib1(i);
        printf("%d ",ans);
    }
    return 0;
}