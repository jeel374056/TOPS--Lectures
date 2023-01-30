#include <stdio.h>
int main()
{
    // unary operator
    // ++ --
    // int a = 45;
    // // a--
    // // printf("a = %d", a++);
    // printf("a = %d", ++a);
    // printf("a = %d", a);

    int a = 35;
    int b = 5;
    int c = 8;
    int d = 9;
    int e = a++ + --b * --c - d++;
    // 282  263 73 281 86 53 54 54 
    printf("%d", e);

    return 0;
}
/*
post
variable operator
a++ a--

pre

operator variable
++a --a


*/