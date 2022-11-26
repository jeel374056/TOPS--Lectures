/*
struct structurename{
    int n1;
    float n2;
    char name[50];
}
struct structurename s1,s2;
*/
#include <stdio.h>
#include <string.h>
int main()
{
    struct student
    {
        int age;
        char name[100];
        float weight;
    };
    struct student s1 = {42, "sugandh", 85.63};
    struct student s2 = {36, "rahul", 56.00};
    // s1.age = 36;
    // strcpy(s1.name, "sugandh");
    // s1.weight = 90.56;
    // s2.age = 45;
    // s2.weight = 65.92;
    // strcpy(s2.name, "Rahul");
    printf("\nFor student 1\nname:%s\nage=%d\nweight=%f", s1.name, s1.age, s1.weight);
    printf("\nFor student 2\nname:%s\nage=%d\nweight=%f", s2.name, s2.age, s2.weight);
    return 0;
}