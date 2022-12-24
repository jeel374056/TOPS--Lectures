#include <stdio.h>
int main()
{
    int a = 5;
    if (a == 5)
    {
        printf("Inside if: how does the semicolon or any other character"
               " but digits as a condition in if statement treated? or"
               " cause COMPILATION ERROR!\n");
    }
    else if (a == 5)
    {
        printf("Else IF");
    }
    else if (a == 5)
    {
        printf("Next else if");
    }
    return 0;
}