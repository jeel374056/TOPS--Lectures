#include<stdio.h>
void table(int k)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d *%d =%d\n",k,i,k*i);
    }
}


int main()
{
int a;
printf("Enter Number: ");
scanf("%d",&a);
table(a);
// table(47);
return 0;
}