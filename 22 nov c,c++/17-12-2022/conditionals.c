#include <stdio.h>
int main()
{
    int a = 26;
    printf("Before IF\n");
    if (1)
    {
        printf("hello i am following if statement\n");
        printf("hello i am following if statement\n");
        printf("hello i am following if statement\n");
        printf("hello i am following if statement\n");
        printf("hello i am following if statement\n");
    }
    else
    {
        printf("Else lines\n");
    }
    printf("After IF");
    return 0;
}
/*
conditional statements

simple if
if(condition)
{

    lines of codes
}


if...else
if(condition)
{
    this will run if our condition is true
}
else
{
    this will run when condition is false
}

if else if..elseif...else if......else  ladder if else

if(condition1)
{
    code when condition 1 isd true
}
else if(condition2)
{
    code run when condition 2 istrue
}
else if(condition3)
{
    code run when condition 3 is true
}
.

.
.
.

.
[
else
{
    not a single condition is true
}
]
nested if else
if(condition)
{
    if(condition)
    {

    }
    else
    {
        
    }
}
*/