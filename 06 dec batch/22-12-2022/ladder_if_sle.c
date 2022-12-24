#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age > 60 && age < 150)
    {
        printf("Senior citizen");
    }
    else if (age > 18 && age <= 60)
    {
        printf("Adult");
    }
    else if (age <= 18 && age > 0)
    {
        printf("child");
    }
    else
    {
        printf("Enter correct age");
    }

    return 0;
} /*
 if(condition)
 {

 }
 else if(vcondition 2)
 {

 }
 else if(condition 3)
 {

 }
 else
 {

 }
 */