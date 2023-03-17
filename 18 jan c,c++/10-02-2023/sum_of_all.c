#include <stdio.h>
int main()
{
    int sum = 0;
    int array1[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &array1[i]);
        sum = sum + array1[i];
    }
    printf("total=%d", sum);
    return 0;
}