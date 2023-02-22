// 1)Function without return value and with parameters
#include <stdio.h>
void addition(int a, int b)
{
    int answer = a + b;
    printf("Addition=%d\n", answer);
}

int main()
{
    // addition(89, 96);
    // addition(74, 48);
    int m=48;
    int n=32;
    addition(m,n);
    return 0;
}