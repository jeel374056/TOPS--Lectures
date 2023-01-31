#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    if (age > 0 && age < 18)
    {
        printf("Child");
    }
    else if (age >= 18 && age <= 40)
    {
        printf("young");
    }
    else if (age > 40 && age <= 60)
    {
        printf("mid-Young");
    }
    else if (age > 60 && age <= 90)
    {
        printf("Senior Citizen");
    }
    else if (age > 90 && age <= 120)
    {
        printf("Old");
    }
    else
    {
        printf("Enter Age Between 1 to 120 ");
    }
    
    return 0;
}
/*
if (condition1)
{
    this part will run when condition1 is true
}
else if(condition2)
{
    when condition2 i strue
}
:
:
:
[
else
{
    this part will run when not an above condition is true
}
]

1-18  ---child
18-40 ---young
40-60 ----mid young
60-90 ---senior citizen
90-120 ----old
*/