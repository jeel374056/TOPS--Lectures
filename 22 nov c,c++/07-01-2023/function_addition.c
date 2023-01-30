#include <stdio.h>
int addition(int m, int n)
{
    int answer;
    answer = m + n;
    return answer;
}
int main()
{
    int a, b, add;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    add = addition(a, b);
    printf("addition=%d", add);
    return 0;
}