#include <stdio.h>
int main()
{
    int age, height;
    printf("Enter Your age: ");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("you are child");
    }
    else if (age < 40)
    {
        printf("your are youth");
    }
    else if (age < 60)
    {
        printf("you will become senior citizen soon");
    }
    else if (age >= 60)
    {
        printf("senior citizen");
    }
}
/*
simeple if
if else
ladder if else
nested if else
*/