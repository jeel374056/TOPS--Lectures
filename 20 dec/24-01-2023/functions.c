#include <stdio.h>

int days_calc(int y)
{
    int day = y * 365;
    return day;
}

int main()
{
    int d;
    d = days_calc(56);
    printf("%d", d);

    return 0;
}