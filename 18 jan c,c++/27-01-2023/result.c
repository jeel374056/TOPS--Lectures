#include <stdio.h>

int main()
{
    int roll, m1, m2, m3, m4, m5, total;
    float percent;
    printf("Enter Rollno: ");
    scanf("%d", &roll);
    printf("Enter Marks of 5 subject: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percent = ((float)total / 500) * 100;
    printf("Roll no : %d", roll);
    printf("Total : %d", total);
    printf("Percent: %.2f", percent);
    if (m1 < 33 || m2 < 33 || m3 < 33 || m4 < 33 || m5 < 33)
    {
        printf("Fail");
    }
    else
    {
        if (percent > 80 && percent < 100)
        {
            printf("GRade A");
        }
        else if (percent >= 60 && percent <= 80)
        {
            printf("Grade b");
        }
        else if (percent >= 33 && percent < 60)
        {
            printf("Grade c");
        }
    }
    return 0;
}