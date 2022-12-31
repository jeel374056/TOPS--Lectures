#include <stdio.h>
int main()
{
    // int a = 50;
    // while (a < 100)
    // {
    //     printf("hello");
    //     a++;
    // }
    int n;
    printf("Enter Number You want table: ");
    scanf("%d", &n);
    int i = 1;
    while (i < 11)
    {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}