#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("You can vote");
    }
    else
    {
        printf("You can not vote");
    }

    return 0;
}
/*
if(condition)
{
    this part run when condition is true
}
else
{
    this part run when condition is false
}
*/