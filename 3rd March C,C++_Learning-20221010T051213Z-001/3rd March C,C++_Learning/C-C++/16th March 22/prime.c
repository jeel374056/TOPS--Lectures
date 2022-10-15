#include <stdio.h>

int main()
{
    int n = 12, a, flag = 0;
    if (n == 0 || n == 1)
    {
        printf("Number is prime");
    }
    for (a = 2; a < n / 2; a++)
    {
        if (n % a == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Number is not prime");
    }
    else
    {
        printf("number is prime");
    }

    return 0;
}