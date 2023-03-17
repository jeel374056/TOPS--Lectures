#include <stdio.h>
int main()
{
    int marks;
    float percent;
    printf("Enter Marks: ");
    scanf("%d", &marks);
    printf("Enter Percentage: ");
    scanf("%f", &percent);

    printf("your marks is %d and your percentage is %.3f", marks, percent);
    return 0;
}