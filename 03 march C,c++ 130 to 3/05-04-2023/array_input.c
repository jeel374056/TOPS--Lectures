#include <stdio.h>
int main()
{
    int n;
    printf("enter Size of array: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("ENter value: ");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}