#include<stdio.h>
void main()
{
    //B3. Write a program to make a square and cube of number.

    int a,s,c;
    printf("ENTER A NUMBER");
    scanf("%d",&a);
    s=a*a;
    c=s*a;
    printf("SQUARE OF %d IS = %d",a,s);
    printf("\n\n CUBE OF %d IS = %d",a,c);

}