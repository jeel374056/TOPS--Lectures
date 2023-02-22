// 4)function without parameters and without return value
#include <stdio.h>
void greeting()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("good morning\n");
    }
}

int main()
{
    greeting();
    printf("After Function calling1");
    greeting();
    greeting();
    return 0;
}