/*
function declaration
returntype functionname(parameters);
always before main

function definition
returntype functionname(parameters)
{
    body of the function
}
this part can be before or after the main()

function calling
everywhere in the program
functionanme(parameters);

there are two type of functions
inbuilt function
user defined function

4 type

function with parameter and with return value
function without parameter and with return value
function with parameter and without return value
function without parameter and without return value

*/
#include <stdio.h>
// void greeting();

void greeting()
{
    printf("good Morning");
}

int main()
{

    greeting();
    greeting();
    return 0;
}
