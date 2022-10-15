#include <stdio.h>
int main()
{
    // int num = 122, sum = 0, rem, temp = num;
    // while (num != 0)
    // {
    //     rem = num % 10;
    //     sum = sum * 10 + rem;
    //     num /= 10;
    // }
    // if (temp == sum)
    // {
    //     printf("number is palindrome");
    // }
    // else
    // {
    //     printf("number is not palindrome");
    // }
    int i, j, s, num = 5;
    for (i = 1; i <= num; i++)
    {
        for (s = 1; s <= num - i; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i == num || j == 1 || i == j)
            {

                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
