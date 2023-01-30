#include<stdio.h>
int main()
{
int a=90;
int *p=&a;
int **q=&p;
*p=80;
printf("%p",&a);
// printf("value of a=%d",a); 
return 0;
}
/*

pointer is a special variable
it stores the address of other variable

*/