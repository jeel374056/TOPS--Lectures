#include <stdio.h>
int main()
{
    int a = 1, n;
    printf("Enter value: ");
    scanf("%d", &n);
    while (a < n)
    {
        printf("[%d]", a);
        ++a;
    }

    return 0;
}