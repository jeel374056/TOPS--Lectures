#include <stdio.h>
int main()
{
    float a, b, c, d, e, total, percentage;
    printf("enter your mark\n");
    printf("math : \n");
    scanf("%f", &a);
    printf("science : \n");
    scanf("%f", &b);
    printf("hindi : \n");
    scanf("%f", &c);
    printf("gujrati : \n");
    scanf("%f", &d);
    printf("english : \n");
    scanf("%f", &e);

    total = a + b + c + d + e;
    percentage = (total / 500) * 100;
    printf("your value is :  %f\n", percentage);

    if (percentage > 75)
    {
        printf("you have get distinction");
    }
    else if ((percentage > 60) && (percentage <= 75))
    {
        printf("you have get first class");
    }
    else if ((percentage > 50) && (percentage <= 60))
    {
        printf("you have get second class");
    }
    else if ((percentage > 35) && (percentage <= 50))
    {
        printf("you have get pass class");
    }
    else
    {
        printf("you have fail");
    }
    return 0;
}