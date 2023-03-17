#include <stdio.h>
int main()
{
    printf("1\n");
    l1:
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    goto l1;
    printf("8\n");
    printf("9\n");
    printf("10\n");

    return 0;
}