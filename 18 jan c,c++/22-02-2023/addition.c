#include <stdio.h>
int calculation(int x, int y)
{
    int answer = x + y;
    return answer;
}
int main()
{
    int m;
    m = calculation(50, 10);
    printf("%d", m);
    return 0;
}