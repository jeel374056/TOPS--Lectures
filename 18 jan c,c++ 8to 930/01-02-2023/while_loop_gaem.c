#include <stdio.h>
int main()
{
    int number=0;
    while (number!=48)
    {
        printf("Enter number: ");
        scanf("%d", &number);
    }

    return 0;
}