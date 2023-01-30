#include <stdio.h>
int addition(int m, int n)
{
    int answer = m + n;
    // printf("%d",answer);
    return answer;
}

int main()
{
    int sum;
    int a = 6, b = 4;
    sum = addition(a, b);
    printf("sum=%d", sum);
    return 0;
}
