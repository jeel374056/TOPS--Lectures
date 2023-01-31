#include <stdio.h>

int total = 1;
int fact(int a)
{
    if (a > 0)
    {
        total *= a;
        fact(a - 1);
    }
    return total;
}
int main()
{
    int ans;
    ans = fact(5);
    printf("%d", ans);
    return 0;
}
// 5 = 5 * 4 * 3 * 2 * 1;