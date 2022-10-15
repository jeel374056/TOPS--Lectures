// write a program to find out the factorial of given number using function.
#include<stdio.h>
 int fact(int);

    int fact(int n)
    {
        int i,f=1;
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        return f;
    }
    

    int main()
    {
        int no,factorial;
        printf("enter a number to calculate it's factorial\n");
        scanf("%d",&no);
        factorial=fact(no);
        printf("factorial of the num(%d)=%d\n",no,factorial);
    }
