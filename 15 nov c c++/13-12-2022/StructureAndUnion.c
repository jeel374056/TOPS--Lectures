#include <stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int age;
    int marks;
    float percentage;
};
int main()
{
    struct student s, p,t;
    // struct student t;
    s.age = 30;
    s.marks = 98;
    s.percentage = 58.9;
    strcpy(s.name, "Sugandh");
    printf("name=%s age=%d marks=%d percendage=%f", s.name, s.age, s.marks, s.percentage);
    return 0;
}
/*
Structure
int
int a//4
char //1
struct structure_name{
    int age;
    int marks;
    char name[30];
    float percentage;
}
struct structure_name variablename;
*/