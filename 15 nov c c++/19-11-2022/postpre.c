#include <stdio.h>
int main()
{
    float a = 68, b = 95;
    // printf("a=%d b=%d", a++, b++);
    // printf("a=%d b=%d", a, b);
    int answer = a++ + --b;
    printf("%d", answer);
    return 0;
}
/*
int a=65;
post increment/decrement  a++  a--
pre increment/decrement   ++a  --a
*/