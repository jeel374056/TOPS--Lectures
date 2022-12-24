#include <stdio.h>
int main()
{
    int a = 45;
    int b = 98;
    int c = 89;
    int answer = a + b - c / a * b;
    printf("%d", answer);
    return 0;
}