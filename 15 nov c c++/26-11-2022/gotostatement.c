#include <stdio.h>
int main()
{
    printf("1 ");
    goto l2;
    printf("2 ");
    printf("3 ");
l1:
    printf("4 ");
    printf("5 ");
l2:
    printf("6 ");
    goto l1;
    printf("7 ");

    return 0;
}