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
    else
    {
        printf("you aren't eligible for voting");
    }

    return 0;
} /*
 if(condition)
 {
     body1
 }
 else
 {
     body2
 }

 */