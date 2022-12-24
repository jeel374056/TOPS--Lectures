#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    printf("Enter 5 MArks: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    int total = m1 + m2 + m3 + m4 + m5;
    printf("total=%d\n", total);
    float per = ((float)total / 500) * 100;
    printf("percentage=%.2f\n", per);
    if (per > 90 && per < 100)
    {
        printf("A+");
    }
    else if (per > 80 && per <= 90)
    {
        printf("A");
    }
    else if (per > 70 && per <= 80)
    {
        printf("B");
    }
    else if (per > 60 && per <= 70)
    {
        printf("C");
    }
    else if (per > 50 && per <= 60)
    {
        printf("D");
    }
    else if (per > 33 && per <= 50)
    {
        printf("E");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}