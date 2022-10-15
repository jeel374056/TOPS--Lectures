#include<stdio.h>
void main()
{
    //B9.Write a Program to show swap of two No's without using third variable.
    int a,b;
    printf("ENTER THE VALUDE OF A : ");
    scanf("%d",&a);
    printf("ENTER THE VALUDE OF B : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("BEFORE SWAPING VALUE\n");
    printf("THE VALUE OF A IS %d\n",a);
    printf("THE VALUE OF A IS %d\n",b);

}