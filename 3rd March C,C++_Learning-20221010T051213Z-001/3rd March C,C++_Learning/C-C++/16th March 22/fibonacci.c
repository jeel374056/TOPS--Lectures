#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, num = 15, i;
    printf("%d %d ", a, b);
    for (i = 2; i <= num; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}