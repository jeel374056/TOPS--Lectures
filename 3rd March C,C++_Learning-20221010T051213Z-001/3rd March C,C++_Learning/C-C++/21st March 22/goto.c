#include <stdio.h>

int main()
{
    int n = 1;
text:
    printf("%d ", n);
    n++;
    if (n <= 5)
    {
        goto text;
    }
    return 0;
}