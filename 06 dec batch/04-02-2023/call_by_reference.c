#include <stdio.h>
void fun1(int *m)
{
    *m = *m + 20;
    printf("m=%d\n", *m);
}
int main()
{
    int x = 70;
    fun1(&x);
    printf("x=%d\n", x);
    return 0;
}

/*
void fun1(int m)
{
    m=m+20;
    printf("m=%d\n",m);
}

int main()
{
    int x=70;
    fun1(x);
    printf("x=%d\n",x);
}

*/