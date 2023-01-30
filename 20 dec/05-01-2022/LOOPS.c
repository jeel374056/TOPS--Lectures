#include <stdio.h>
int main()
{
    int num;
    printf("Ebnter number");
    scanf("%d", &num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", num, i, i * num);
    }

    // printf("After Loop");
    // printf("%d", i);

    return 0;
}
/*
LOOPS
ENTRY CONTROL LOOP

FOR LOOP
for(initialization;condition check;increment/decrement)
{
    Body of the for loop
}
iteration
itearating variable

WHILE LOOP


EXIT CONTROL LOOP
DO WHILE LOOP

scope of variable

*/