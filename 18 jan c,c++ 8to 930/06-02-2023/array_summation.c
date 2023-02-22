#include <stdio.h>
int main()
{
    int array1[10] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + array1[i];
        sum+=array1[i];
    }
    printf("Sum=%d", sum);
    return 0;
}