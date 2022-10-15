// write a program to print a number and check tha number is palindrom or not palindromusing recursive function.
#include<stdio.h>
#include<math.h>
int reverse(int num);
int palindrom(int num);
int palindrom(int num)
{
    if(num==reverse(num))
    {
        return 1;
    }
    return 0;
}
int reverse(int num)
{
    int digit=(int)log10(num);
    if(num==0)
    return 0;
    return((num%10*pow(10,digit))+reverse(num/10));
}
int main()
{
    int num;
    printf("enter any number : ");
    scanf("%d",&num);
    if(palindrom(num)==1)
    {
        printf("%d is palindrom number.\n",num);
    }
    else
    {
        printf("%d is not palindrom number.\n",num);
    }
    return 0;
}