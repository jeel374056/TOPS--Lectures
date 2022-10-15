#include <stdio.h>
#define SQUARE(a) (a * a)
#define CUBE(a) (a * a * a)

int main()
{
    int v = 5;
    printf("Square of %d is %d\n", v, SQUARE(v));
    printf("Cube of %d is %d\n", v, CUBE(v));
    return 0;
}