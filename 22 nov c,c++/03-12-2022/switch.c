#include <stdio.h>
int main()
{
    char a;
    int m, n;
    printf("Enter Your choice:\n+ = Addition\n- = subtraction\n* = multiplication\n/ = division\n");
    scanf("%c", &a);
    printf("\nEnter Two values: ");
    scanf("%d %d", &m, &n);
    switch (a)
    {
    case '+':
    {
        printf("addition=%d", m + n);
        break;
    }
    case '-':
    {
        printf("addition=%d", m - n);
        break;
    }
    case '*':
    {
        printf("addition=%d", m * n);
        break;
    }
    case '/':
    {
        printf("addition=%d", m / n);
        break;
    }
    default:
    {
        printf("Enter proper choice :");
        break;
    }
    }
    return 0;
}
/*
switch(variable)
{
    case 1:
    {

        body
        break;
    }
    case 2:
    {
        body:
        break;
    }
    default:
    {
        body;
        break;
    }
}
*/