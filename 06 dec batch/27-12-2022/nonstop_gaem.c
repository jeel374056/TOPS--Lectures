#include <stdio.h>
int main()
{
    int a;

    while (a != 101)
    {
        printf("Enter number: ");
        scanf("%d", &a);
    }
    // do
    // {
    //     printf("Enter number: ");
    //     scanf("%d", &a);
    // } while (a != 101);

    return 0;
}