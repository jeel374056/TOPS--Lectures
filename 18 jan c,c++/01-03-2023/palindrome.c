#include <stdio.h>
int main()
{
    int num, rev = 0, rem;
    printf("Enter number: ");
    scanf("%d", &num);
    int temp = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("Sum of all digit is %d\n", rev);
    if (temp == rev)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not palindrome Number");
    }
    return 0;
}