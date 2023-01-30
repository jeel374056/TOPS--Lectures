#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, total;
    float percentage;
    printf("Enter 5 subjects marks");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    printf("Total = %d\n", total);
    percentage = ((float)total / 500) * 100;
    printf("percentage = %.2f", percentage);
    if (m1 < 33 || m2 < 33 || m3 < 33 || m4 < 33 || m5 < 33)
    {
        printf("you are failed");
    }
    else
    {
        if (percentage > 90 && percentage < 100)
        {
            printf("A+");
        }
        else if (percentage <= 90 && percentage > 80)
        {
            printf("A");
        }
        else if (percentage <= 80 && percentage > 70)
        {
            printf("B");
        }
        else if (percentage <= 70 && percentage > 55)
        {
            printf("C");
        }
        else if (percentage <= 55 && percentage > 33)
        {
            printf("D");
        }
        else
        {
            printf("Fail");
        }
    }

    return 0;
}

/*
if(condition1)
{
    part run for condition1
}
else if(condition2)
{
    part run for condition2
}
else if(condition2)
{
    part run for condition
}
..
.

.
.
[else
{
    part run when non of the above condition is true
}]

*/