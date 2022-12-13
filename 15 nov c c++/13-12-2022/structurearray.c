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
    
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter Name,marks,age,percentage: ");
        scanf("%s %d %d %f", s[i].name, &s[i].age, &s[i].marks, &s[i].percentage);
        printf("\nName =%s , age= %d , marks= %d, percentage= %f", s[i].name, s[i].age, s[i].marks, s[i].percentage);
    }
    return 0;
}