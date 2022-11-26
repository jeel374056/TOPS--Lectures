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
    union student
    {
        int age;
        char name[100];
        float weight;
    };
    union student s1;
    union student s2;
    printf("Enter Your name ,age,weight");
    scanf("%s %d %f", s1.name, &s1.age, &s1.weight);
    printf("\nFor student 1\nname:%s\nage=%d\nweight=%f", s1.name, s1.age, s1.weight);
    // printf("\nFor student 2\nname:%s\nage=%d\nweight=%f", s2.name, s2.age, s2.weight);
    return 0;
}