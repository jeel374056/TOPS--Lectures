#include <stdio.h>
int main()
{
    int a = 50;
    int *p = &a;
    int k = *p;
    printf("%d", k);
    a = 65;
    k = *p;
    // printf("%p\n", p);
    printf("%d", k);
    return 0;
}