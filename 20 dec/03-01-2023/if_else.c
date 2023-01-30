#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your age: ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("you are Eligible for voting");
    }
    else
    {
        printf("you are not Eligible for voting");
    }
    // age>18?printf("You are eligible for voting"):printf("you are not eligible for voting")

    return 0;
}
/*
if(condition)
{
    ferfer
}
else
{
    fdhrtht
}

?:(ternary operator)
condition ?this part when condition is true : this part wehn condition is false
*/