#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}
/*
user inputted number

odd 1 3 5 7 9
even 2 4 6 88 78 42 36


*/