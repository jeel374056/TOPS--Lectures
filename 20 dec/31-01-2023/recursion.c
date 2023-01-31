#include <stdio.h>
void addition()
{
    printf("Calling\n");
    addition();
}

int main()
{
    addition();
    return 0;
}
/*
when a function call itself again and again

*/