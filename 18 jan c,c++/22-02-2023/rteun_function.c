#include <stdio.h>
int greet()
{
    int a = 50;
    printf("good Morning");
    return a;
}
int main()
{
    int x, y;
    x = greet();
    y = greet();
    return 0;
}