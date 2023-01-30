#include <stdio.h>
union student
{
    // char name[10];
    char class;
    int age;
    int mobile;
};
int main()
{

    // struct student s[3];
    union student s;
    printf("%d",sizeof(s));
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Enter Age: ");
    //     scanf("%d", &s[i].age);
    //     printf("Enter Class: ");
    //     scanf(" %c", &s[i].class);
    //     printf("Enter Name: ");
    //     // gets( s[i].name);
    //     scanf(" %s",s[i].name);
    //     printf("Enter mobile: ");
    //     scanf("%d", &s[i].mobile);

    //     printf("name=%s class=%c age=%d mobile=%d", s[i].name, s[i].class, s[i].age, s[i].mobile);
    // }
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