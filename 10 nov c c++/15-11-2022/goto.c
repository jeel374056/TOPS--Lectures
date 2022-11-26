#include <stdio.h>
int main()
{
    printf("1\n");
    printf("2\n");
    printf("3\n");
l1:
    printf("4\n");
    printf("5\n");
    printf("6\n");
    goto l1;
    printf("7\n");
    printf("8\n");
    printf("9\n");

    return 0;
}