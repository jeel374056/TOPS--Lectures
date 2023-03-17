#include <stdio.h>
int main()
{
    int num, factorial = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial=%d",factorial);
    return 0;
}
/*
4521       4+5+2+1=12
*/