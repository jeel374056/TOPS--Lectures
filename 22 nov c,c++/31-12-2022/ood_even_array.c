#include <stdio.h>
int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 10;i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d is even", array[i]);
        }
        else
        {
            printf("%d is odd", array[i]);
        }
    }
    return 0;
}