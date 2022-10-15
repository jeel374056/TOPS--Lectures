#include<stdio.h>
void main()
{
    //B6. Write a program to find the simple Interest.
    int p,n,r,si;
    printf("ENTER PRINCIPLE,RATE OF INTRESR & TIME :");
    scanf("%d%d%d",&p,&r,&n);
    si=(p*r*n)/100;
    printf("SIMPLE INTREST IS :%d",si);
}