#include <stdio.h>
int main()
{
// and(&&) or(||) not(!)
    int a = 55;
    int b = 2;
    int c = 14;

    // printf("%d", a > b || b > c);
    printf("%d",!(a>b));

    return 0;
}