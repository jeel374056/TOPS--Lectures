#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d is even\n", a[i]);
        }
        else
        {
            printf("%d is odd\n", a[i]);
        }
    }
    return 0;
}