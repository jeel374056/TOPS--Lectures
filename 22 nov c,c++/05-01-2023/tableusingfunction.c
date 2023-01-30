#include <stdio.h>
void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d =%d\n", n, i, n * i);
    }
}

int main()
{
    // int num;
    // printf("Enter Value");
    // scanf("%d", &num);
    // table(num);
    table(45);
    table(95);
    return 0;
}