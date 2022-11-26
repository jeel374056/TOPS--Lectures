// if  simple if
// if else
// if........ else if...... else(ladder if else)
// nested if else
// if(condition)
// {

// }
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 0 && age < 18)
    {
        printf("Youa are born");
    }
    else if (age >= 18 && age < 60)
    {
        printf("\n you are adult");
   