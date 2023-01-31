#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("Eligible For Voting");
    }
    else
    {
        printf("Not eligible for voting");
    }
    return 0;
}
/*
if (condition)
{
    True then this part of code runs
}
else
{
    False then this part of code will run
}

*/