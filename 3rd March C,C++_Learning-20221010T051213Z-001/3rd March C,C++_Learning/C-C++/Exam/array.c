#include <stdio.h>
int main()
{
    int min, sec, i;
    int a[8] = {22154542, 334645645, 546546, 12121, 555645, 45454, 46464, 4464};
    min = a[0];
    sec = a[1];
    for (i = 0; i < 8; i++)
    {
        if (a[i] < min)
        {
            sec = min;
            min = a[i];
        }
        else if (a[i] < sec && a[i] != min)
        {
            sec = a[i];
        }
    }
    printf(" minimum value is %d\n", min);
    printf("second minimum value of %d\n", sec);
    return 0;
}