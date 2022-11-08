#include <stdio.h>
int main()

{
    int a;
    float bill, charge;
    printf("your monthly used unit value : ");
    scanf("%d", &a);

    if (a >= 199)
    {
        bill = a * 1.20;
        printf("your total monthly bill is %f", bill);
    }
    else if (a >= 200 && a <= 400)
    {
        bill = a * 1.50;
        printf("your total monthly bill is %f", bill);
    }
    else if (a > 400 && a <= 600)
    {
        bill = a * 1.80;
        printf("your total monthly bill is %f", bill);
    }
    else
    {
        bill = a * 2.00;
        printf("your total monthly bill is %f", bill);
    }

    if (bill > 400)
    {
        charge = bill * 0.15;
        printf("\nyou have pay extra 15 percent charges %f", charge);
    }
    else if (bill < 400)
    {
        charge = bill + 100;
        printf("\nyou have pay extra charges of %d", charge);
    }
    float final_bill = bill + charge;
    printf("\nyou have pay total amount of %f", final_bill);
    return 0;
}