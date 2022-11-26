#include <stdio.h>
int main()
{
    int arry[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value:");
        scanf("%d", &arry[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Array=%d", arry[i]);
    }
    return 0;
}