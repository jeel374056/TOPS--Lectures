#include <stdio.h>
int main()
{
    printf("+=addition -=subtraction *=multiplication /=division");
    char ch;
    printf("\nEnter your choice: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case '+':
    {
        int a, b;
        printf("Enter two Numbers: ");
        scanf("%d %d", &a, &b);
        int answer = a + b;
        printf("Answer=%d ", answer);
        break;
    }
    case '-':
    {
        int a, b;
        printf("Enter two Numbers: ");
        scanf("%d %d", &a, &b);
        int answer = a - b;
        printf("Answer=%d ", answer);
        break;
    }
    case '*':
    {
        int a, b;
        printf("Enter two Numbers: ");
        scanf("%d %d", &a, &b);
        int answer = a * b;
        printf("Answer=%d ", answer);
        break;
    }
    case '/':
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