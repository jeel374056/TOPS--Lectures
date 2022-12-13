#include <stdio.h>
int main()
{
    int a[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number %d : ", i);
        scanf("%d", &a[i]);
        sum=sum+a[i];
        // sum += a[i];
    }
    printf("Sum=%d", sum);

    return 0;
}