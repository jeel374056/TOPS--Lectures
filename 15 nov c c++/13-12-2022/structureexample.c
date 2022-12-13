#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    int age;
    int marks;
    float percentage;
};
int main()
{

    struct student s, p, t;
    printf("\nEnter Name,marks,age,percentage: ");
    scanf("%s %d %d %f", s.name, &s.age, &s.marks, &s.percentage);
    printf("\nName =%s , age= %d , marks= %d, percentage= %f", s.name, s.age, s.marks, s.percentage);

    printf("\nEnter Name,marks,age,percentage: ");
    scanf("%s %d %d %f", p.name, &p.age, &p.marks, &p.percentage);
    printf("\nName =%s , age= %d , marks= %d, percentage= %f", p.name, p.age, p.marks, p.percentage);

    printf("\nEnter Name,marks,age,percentage: ");
    scanf("%s %d %d %f", t.name, &t.age, &t.marks, &t.percentage);
    printf("\nName =%s , age= %d , marks= %d, percentage= %f", t.name, t.age, t.marks, t.percentage);
    return 0;
}