#include <stdio.h>

int main()
{
    int per = 70;
    if (per > 90)
    {
        printf("A grade");
    }
    else if (per <= 90 && per >= 80)
    {
        printf("B grade");
    }
    else if (per <= 80 && per > 70)
    {
        printf("C grade");
    }
    else if (per <= 70 && per >= 60)
    {
        printf("D grade");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}