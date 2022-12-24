#include <stdio.h>
int main()
{
    printf("1-addition 2-subtraction 3-multiplication 4-division");
    int ch;
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
        int a, b;
        printf("Enter two Numbers: ");
        scanf("%d %d", &a, &b);
        int answer = a + b;
        printf("Answer=%d ", answer);
        break;
    }
    case 2:
    {
        int a, b;
        printf("Enter two Numbers: ");
        scanf("%d %d", &a, &b);
        int answer = a - b;
        printf("Answer=%d ", answer);
        break;
    }
    case 3:
    {
        int a, b;
        printf("Enter two Numbers: ");
        scanf("%d %d", &a, &b);
        int answer = a * b;
        printf("Answer=%d ", answer);
        break;
    }
    case 4:
    {
        int a, b;
        printf("Enter two Numbers: ");
        scanf("%d %d", &a, &b);
        int answer = a / b;
        printf("Answer=%d ", answer);
        break;
    }
    default:
    {
        printf("Please chosse correct option from menu: ");
        break;
    }
    }
    return 0;
}