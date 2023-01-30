#include <stdio.h>
int main()
{
    int array[3];
    for (int k = 0; k < 3; k++)
    {
        printf("Enter Number: ");
        scanf("%d", &array[k]);
        for (int i = 1; i <= 10; i++)
        {
            printf("%d X %d =%d\n", array[k], i, array[k] * i);
        }
    }

    return 0;
}