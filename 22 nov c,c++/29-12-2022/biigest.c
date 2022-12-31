#include <stdio.h>
int main()
{
    // 5 8 9 7 4 5 6 3 2 1
    int arr[10], big;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }
    big = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > big)
        {
            big = arr[i];
        }
    }
    printf("%d is biggest", big);

    return 0;
}