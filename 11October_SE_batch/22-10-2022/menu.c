#include <stdio.h>
int main()
{
    int a, n1, n2;
    int addition, substract, multiplication;
    float division;
    int n = 1;
    while (n)
    {
        printf("please select your option");
        printf("\n1.addition\n2.substract\n3.division\n4.multiplication : ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
        {
            printf("please enter the any two number for addition\n");
            scanf("%d %d", &n1, &n2);
            addition = n1 + n2;
            printf("your value addition is : %d", addition);
            n = 0;

            break;
        }
        case 2:
        {
            printf("please enter the any two number for substract\n");
            scanf("%d %d", &n1, &n2);
            substract = n1 - n2;
            printf("your value substract is : %d", substract);
            n = 0;

            break;
        }
        case 3:
        {
            printf("please enter the any two number for division\n");
            scanf("%d %d", &n1, &n2);
            division = n1 / n2;
            printf("your value division is : %f", division);
            n = 0;
            break;
        }
        case 4:
        {
            printf("please enter the any two number for multiplication\n");
            scanf("%d %d", &n1, &n2);
            multiplication = n1 * n2;
            printf("your value multiplication is : %d", multiplication);
            n = 0;
            break;
        }
        default:
        {
            printf("Enter correct option from above");
        }
        }
    }
    return 0;
}