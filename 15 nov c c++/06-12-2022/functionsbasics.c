#include <stdio.h>
int m;//global variable
void addition()
{
    int a, b, answer;//local variable
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    answer = a + b;
    printf("Answer=%d ", answer);
}

int main()
{
    int z=80;//local variables
    printf("a=%d", z);
    addition();
    // addition();
    return 0;
}
//parameters can be used to pass value to the calling functions