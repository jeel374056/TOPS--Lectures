#include<stdio.h>
void Add(int a, int b){
    int c;
    c = a+b;
    printf("Addtion of %d and %d is %d",a,b,c);
}

int main()
{
    int a,b;
    printf("Enter the first value: ");
    scanf("%d",&a);
    printf("Enter the second value: ");
    scanf("%d",&b);
    Add(a,b);
return 0;
}