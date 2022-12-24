#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("you are child");
    }
    else if (age > 18 && age <= 60)
    {
        printf("you are young");
    }
    else if (age > 60)
    {
        printf("senior citizen");
    }

    return 0;
}