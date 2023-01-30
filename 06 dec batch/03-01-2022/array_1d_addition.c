#include <stdio.h>
int main()
{
    int arr1[10] = {25, 65, 85, 74, 69, 85, 47, 85, 69, 50};
    int arr2[10] = {25, 65, 85, 74, 69, 85, 47, 85, 69, 50};
    int addition[10];
    for (int i = 0; i < 10; i++)
    {
        addition[i] = arr1[i] + arr2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", addition[i]);
    }

    return 0;
}