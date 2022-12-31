#include <stdio.h>
int main()
{
    // 5 8 9 7 4 5 6 3 2 1
    int arr[10], small;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    printf("%d is biggest", small);

    return 0;
}