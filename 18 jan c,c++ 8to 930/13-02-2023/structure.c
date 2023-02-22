#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int age;
    char address[40];
    int marks[5];
};
int main()
{
    struct student s1, s2, s3;
    printf("Enter Rollno: ");
    scanf("%d", &s1.rollno);
    printf("Enter Name: ");
    scanf(" ");
    gets(s1.name);
    printf("Enter Age: ");
    scanf("%d", &s1.age);
    printf("Enter Address: ");
    scanf(" ");
    gets(s1.address);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Marks: ");
        scanf("%d", &s1.marks[i]);
    }
    printf("Name =%s \nage=%d\nrollno=%d\naddress=%s\n", s1.name, s1.age, s1.rollno, s1.address);
    for (int i = 0; i < 5; i++)
    {
        printf("Marks=%d\n", s1.marks[i]);
    }
    return 0;
}
/*
struct structurename
{
    datatype1 variable1;
    datype2 variable2;
}


*/