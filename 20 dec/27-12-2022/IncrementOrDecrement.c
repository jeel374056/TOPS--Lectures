#include <stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    int c = 8;
    int answer = a-- + ++b + c++;
    printf("%d\n", answer);
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d", c);
    // printf("%d", a++);
    // printf(" %d", a);
    return 0;
}
/*
++(increment)  +1
--(decrement)  -1
int a=10;
post a++ a--
pre  ++a  --a


*/