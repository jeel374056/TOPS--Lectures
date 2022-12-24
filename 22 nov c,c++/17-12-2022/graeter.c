#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter Three nUmbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // (num%2==0 )
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Num1 Is greater");
        }
        else
        {
            printf("num3 is greater");
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("Num2 is greater");
        }
        else
        {
            printf("num3 is greater");
        }
    }

    return 0;
}