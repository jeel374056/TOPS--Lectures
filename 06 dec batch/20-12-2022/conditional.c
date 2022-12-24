#include <stdio.h>
int main()
{
    // not !
    int a = 458;
    int b = 55;
    // printf("%d",!(a>=b && b<=b && a==b || a>b));
    printf("%d", !a);
    // printf("%d", !(a > b));
    // printf("%d",a-- > b++);
    // a>=b; 1 0
    // a<a;  0 1
    // b>=b 1 0
    return 0;
}