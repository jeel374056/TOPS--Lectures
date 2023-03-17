#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    if (age < 18 && age > 0)
    {
        printf("Child");
    }
    else if (age > 18 && age <= 40)
    {
        printf("young");
    }
    else if (age > 40 && age <= 60)
    {
        printf("Mid young");
    }
    else if (age > 60 && age <= 100)
    {
        printf("Senior citzen");
    }
    else if (age > 100)
    {
        printf("AMAR");
    }
    else
    {
        printf("Enter correct age");
    }
    return 0;
}