#include <stdio.h>
int main()
{
    printf("1\n");
    printf("2\n");
    goto l1;
    printf("3\n");
    printf("4\n");
    printf("5\n");
    l1:
    printf("6\n");
    printf("7\n");
    printf("8\n");

    return 0;
}