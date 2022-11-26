#include <stdio.h>

void func_a();////definition

void func_b();

int x, y = 10; // declaration and initialization of global variables here

int main()

{

    printf("The Global x is = % d\n", x);

    printf("The Global y is = % d\n\n", y);

    func_a();//function calling

    func_b();//function calling

    // a signal to the operating system that the program ran fine here
    func_a();

    return 0;
}

void func_a()//declaration

{

    printf("From the func_a() the Global x is = % d\n", x);

    printf("From the func_a() the Global y is = % d\n\n", y);
}

void func_b()//declaration

{

    int x = 5;

    printf("Inside the func_b() x is = % d\n", x);
}