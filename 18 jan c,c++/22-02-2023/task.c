#include <stdio.h>
void addition()
{
    int a, b, answer;
    printf("Enter Two Values: ");
    scanf("%d %d", &a, &b);
    answer = a + b;
    printf("addition = %d", answer);
}
void Subtract()
{
    int a, b, answer;
    printf("Enter Two Values: ");
    scanf("%d %d", &a, &b);
    answer = a - b;
    printf("Subtract = %d", answer);
}
void multiiply()
{
    int a, b, answer;
    printf("Enter Two Values: ");
    scanf("%d %d", &a, &b);
    answer = a * b;
    printf("multiiply = %d", answer);
}
void dvid()
{
    int a, b, answer;
    printf("Enter Two Values: ");
    scanf("%d %d", &a, &b);
    answer = a / b;
    printf("division = %d", answer);
}
int main()
{
    int choice;
    printf("1-addition\n2-Sbtraction\n3-Multiplcation\n4-Divsion\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        addition();
        break;
    }
    case 2:
    {
        Subtract();
        break;
    }
    case 3:
    {
        multiiply();
        break;
    }
    case 4:
    {
        dvid();
        break;
    }
    default:
    {
        printf("Pleease Choose corct opton ");
    }
    }
    return 0;
}