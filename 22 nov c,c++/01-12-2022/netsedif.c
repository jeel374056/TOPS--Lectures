#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your age:");
    scanf("%d", &age);
    if (age < 60)
    {
        if (age < 18)
        {
            printf("Children");
        }
        else if (age < 35 && age >= 18)
        {
            printf("Adult");
        }
        else if (age >= 35 && age <= 60)
        {
            printf("young");
        }
    }
    else
    {
        printf("you are senior citizen:");
    }

    return 0;
}