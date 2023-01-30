#include <stdio.h>
int greeting(int m) //parameters
{
    int x=90;
    printf("%d",m);
    printf("good Morning\n");
    return x; //return value
}
int main()
{
    int a=45;
    int m,n,b,v;
    m=greeting(a);
    printf("%d",m);
    n=greeting(89);
    printf("%d", m);

    b=greeting(34);
    printf("%d", m); // arguments
    v=greeting(23);
    printf("%d", m);

    return 0;
}


/*
int a; //variable declaration
a=10;   //variable definition
                OR
int a=10;  //declaration with definition

printf("%d",a);  use of varaiable


function is a block of code which run whenever we called it.

functions are of two types:
inbuilt function --pre defined function
printf(),scanf(),gets(),puts(),string_functions().....


user defined function

four types of user defined function
1)function with parameter and without return value
2)function without parameter and with return value
3)function without parameter and without return value
4)function with parameter and with return value


3 things to note:

function declaration

return_type functionname(parameters);

return datatype---void


function definition
return_type functionname(parameters)
{
    body of the function
}

function calling

functionname([paramaters/arguments])




*/