#include <stdio.h>
// #include <conio.h> //console input output
int main()
{
    // clrscr();//clear screen
    int a, b;
    printf("Enter Number1: ");
    scanf("%d", &a);
    printf("Enter number2: ");
    scanf("%d", &b);
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = (float)a / (float)b;
    int mod = a % b;
    printf("addition=%d\nsubtraction=%d\nmultiplication=%d\ndivison=%.2f\nmodulus=%d\n", add, sub, mul, div, mod);
    getch();
    return 0;
}