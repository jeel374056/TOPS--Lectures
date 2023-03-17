#include <stdio.h>
int main()
{
    int a = 45;
    printf("ye if ki body ke pehle hai\n");
    if (a < 90)
    {
        printf("Hello\n");
        int b = 45;
        int d = 65;
        int k = b + d;
        printf("%d\n", k);
    }
    printf("ye if ki body ke bad hai\n");

    return 0;
}
/*
simple if

if (condition)
{
    body of the condition
}

if...else

if (condition)
{
    if part body will run
}
else
{
    this part will run when condition is false
}





if...else if...else if.........else(ladder if else)


if (condition1)
{
    this part will run when condition 1 is true
}
else if(condition2)
{
    this part will run when condition2 is true
}
else if(condition3)
{
    this part will run when condition 3 is true
}
.
.
.
.
.

else
{
    this part will run when none of the above condition is true
}




nested if else



*/