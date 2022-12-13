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
    if (per > 60)
    {
        printf("Grade d");
    }
    else if (per > 70)
    {
        printf("grade c");
    }
    else if (per > 80)
    {
        printf("grade b");
    }
    else if (per > 90)
    {
        printf("grade A");
    }
    else
    {
        printf("grade E");
    }
    return 0;
}