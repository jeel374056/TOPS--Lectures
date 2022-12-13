#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    printf("enter 5 subjects Marks: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    int total = m1 + m2 + m3 + m4 + m5;
    float per = ((float)total / 500) * 100;
    printf("\ntotal=%d", total);
    printf("\npercentage=%f\n", per);
    if (per > 90 && per < 100)
    {
        printf("Grade A");
    }
    else if (per > 80 && per <= 90)
    {
        printf("grade B");
    }
    else if (per > 70 && per <= 80)
    {
        printf("grade C");
    }
    else if (per > 60 && per <= 70)
    {
        printf("grade D");
    }
    else
    {
        printf("grade E");
    }
    return 0;
}