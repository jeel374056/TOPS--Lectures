#include <stdio.h>
struct student
{
    char name[20];
    char class;
    int age;
    int mobile;
};
int main()
{

    struct student s1, s2;
    printf("Enter Name: ");
    gets(s1.name);
    printf("Enter Class: ");
    scanf("%c", &s2.class);
    printf("Enter Age: ");
    scanf("%d", &s2.age);
    printf("Enter mobile: ");
    scanf("%d", &s2.mobile);

    printf("name=%s class=%c age=%d mobile=%d", s2.name, s2.class, s2.age, s2.mobile);

    printf("Enter Name: ");
    gets(s2.name);
    printf("Enter Class: ");
    scanf("%c", &s1.class);
    printf("Enter Age: ");
    scanf("%d", &s1.age);
    printf("Enter mobile: ");
    scanf("%d", &s1.mobile);

    printf("name=%s class=%c age=%d mobile=%d", s1.name, s1.class, s1.age, s1.mobile);

    return 0;
}

/*
int a=50;
int array[10]={10,.20,35,48,574,74};

outside of main

struct strucrure_name
{
    int age;
    char name[20];
    int mobile;
    char class;
}



*/