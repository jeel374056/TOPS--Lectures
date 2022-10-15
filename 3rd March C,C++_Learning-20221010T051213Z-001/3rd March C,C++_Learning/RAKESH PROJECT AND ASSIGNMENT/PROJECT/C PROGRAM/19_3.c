// WRITE A PROGRAM TO PRINT THE 100 TO 81 USING DO WHILE LOOP.

#include<stdio.h>
void main()
{
    int n=100;
    do
    {
        printf("%d\n",n);
        --n;
    }while(n>=81);
}