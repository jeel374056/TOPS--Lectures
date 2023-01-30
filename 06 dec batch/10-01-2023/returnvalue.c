
#include <stdio.h>
int p = 100; // global variable
int greeting(int m)
{
    int a = 50; // local variable
    printf("good Morning");
    printf("%d", m);
    printf("%d", p);
    return a;
}

int main()
{
    int z;
    int b = 70; // local variable
    z=greeting(b);
    printf("%d", z);
    printf("%d", p);
    return 0;
}
