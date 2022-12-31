#include <stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter Number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++)
    {
       
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
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