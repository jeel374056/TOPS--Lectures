// 2)function with partameters and with return value
#include<stdio.h>
int addition(int a,int b)
{
    int answer=a+b;
    return answer;
}


int main()
{
    int m=54;
    int n=26;
    int sum;
    sum=addition(m,n);
    printf("Addition=%d\n",sum);

    return 0;
}