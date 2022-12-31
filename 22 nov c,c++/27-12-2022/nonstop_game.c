#include <stdio.h>
int main()
{
    int num;
    // while (num != 101)
    // {
    //     printf("Enter Number: ");
    //     scanf("%d", &num);
    // }
    do
    {
        printf("Enter Number: ");
        scanf("%d", &num);
    } while (num != 101);
    return 0;
}