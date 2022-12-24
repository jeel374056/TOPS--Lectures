#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter Number: ");
    scanf("%d", &n);
    for (i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}
/*
for(initialization;condition;increment/decrement)
{
    body of loop
}


*/