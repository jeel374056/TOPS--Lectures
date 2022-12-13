#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("You are eligible for voting");
    }

    return 0;
}
/*
if(condition)
{
    body:
}

*/