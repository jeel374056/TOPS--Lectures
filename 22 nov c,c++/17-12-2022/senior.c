#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 60)
    {
        printf("you are senior citizen");
    }
    else
    {
        printf("You are not a senior citizen");
    }

    return 0;
}