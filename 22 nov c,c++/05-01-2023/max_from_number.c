#include <stdio.h>
int main()
{
    int num, temp;
    printf("Enter Number: ");
    scanf("%d", &num);
    int s = num % 10;
    while (num > 0)
    {
        temp = num % 10;
        num = num / 10;
        if (temp > s)
        {
            s = temp;
        }
    }
    printf("biggest is %d\n", s);
    printf("additioon=%d", s + temp);
    return 0;
}