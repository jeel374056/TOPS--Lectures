//write a program to find out the square and qube of given number using function.
#include<stdio.h>
int input()
{
    int k;
    printf("number : ");
    scanf("%d",&k);
    return k;
}
int sqr(int m)
{
    printf("square : %d\n",m*m);
    return m;
}
int cube(int m)
{

    return m*m*m;
}
int main()
{
    int m,cube(),sqr(),input();
    printf("cube :%d\n",cube(sqr(input())));
}
