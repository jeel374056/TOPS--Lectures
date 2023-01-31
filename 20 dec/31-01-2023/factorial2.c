#include <stdio.h>
int fact(int a)
{
    if (a > 1)
    {
        return a * fact(a - 1);
    }
}
int main()
{
    int ans = fact(5);
    printf("%d", ans);
    printf("9%%5=2");
    return 0;
}

// 9%2=5