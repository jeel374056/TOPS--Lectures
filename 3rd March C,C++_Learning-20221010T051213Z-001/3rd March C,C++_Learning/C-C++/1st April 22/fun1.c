#include<stdio.h>
void greet();       // function defination

int main()
{
    greet();     // function calling....
    printf("Hello Everyone ");
    greet();
return 0;
}

// function declaration
void greet(){
    printf("Good Morning\n");
    printf("Good Afternoon");
}