#include <stdio.h>
int main()
{
    printf("1");
    printf("2");
    printf("3");
    goto l1;
    printf("4");
    printf("5");
    printf("6");
l1:
    printf("7");
    printf("8");
    printf("9");
    goto l1;
    return 0;
}
/*
label:

goto label;
*/