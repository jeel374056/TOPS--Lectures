#include <stdio.h>
int main()
{
    int a = 45;
    int *f = &a;
    printf("%p\n", &a);
    printf("%p\n", f);
    *f = 50;
    printf("a=%d", a);
    return 0;
}
/*
int a=48;
pointers datatypte----%p
pointer variable ---it stores the adrees of another variable
*pointername


*/