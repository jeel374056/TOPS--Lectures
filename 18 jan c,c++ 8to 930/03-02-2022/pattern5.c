#include <stdio.h>
int main()
{
    // int num;
    // printf("ENter number: ");
    // scanf("%d", &num);
    int k = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}