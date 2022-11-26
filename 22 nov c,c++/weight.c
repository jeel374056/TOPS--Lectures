#include <stdio.h>
int main()
{
    int weight = 46.23;
    int num;
    float age;
    char first_letter;
    // printf("hello hi....");
    // printf("%d My weight is %d %d %d", weight, weight, weight, weight);
    printf("enter number age and firstletter ");
    scanf("%d %f %c", &num, &age, &first_letter);
    printf("Value of num is %d", num);
    printf("Value of age is %.3f", age);
    printf("Value of num is %c", first_letter);
    return 0;
}
/*
by default---.000000
&---address operator
format specifier
intger--int--%d
float--float--%f
character---char---%c
*/