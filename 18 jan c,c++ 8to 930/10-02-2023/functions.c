/*
function is a block of code which execute whenever its called

inbuilt functions/ pre defined functions
    printf(),scanf(),gets()
user defined function

    4 main categories in user deifned functions
    1)function with parameters and without return value
    2)function with parameters and with return value
    3)function without parameters and with return value
    4)function without parameters and without return value
1)function declaration

returntype functionname([parameters]);

before main

2)function definition

before main  or after main
returntype functionname([parameters])
{

    body of the function


    return somevalue;
}

3)function calling

    variable=functionname(agruments)

*/
#include <stdio.h>

void greeting()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("good morning\n");
    }
}

int main()
{
    greeting();
    printf("After Function calling1");
    greeting();
    greeting();
    return 0;
}