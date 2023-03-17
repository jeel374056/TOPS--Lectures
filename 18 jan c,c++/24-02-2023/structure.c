#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int age;
    char address[50];
    float percentage;
    char subject[20];
};
int main()
{
    struct student s1,s2,s3;
    printf("Enter Rollno: ");
    scanf("%d", &s1.rollno);
    printf("Enter Name: ");
    scanf(" ");
    gets(s1.name);
    printf("Enter Age: ");
    scanf("%d", &s1.age);
    printf("Enter Address");
    scanf(" ");
    gets(s1.address);
    printf("Enter Percentage: ");
    scanf("%f", &s1.percentage);
    printf("Enter Subject: ");
    scanf(" %s", s1.subject);

    printf("\n--------ALL DATA-------------\n");
    printf("NAme= %s\nRollno=%d\nAge=%d\nAddress=%s\npercentage=%f\nsubject=%s\n", s1.name, s1.rollno, s1.age, s1.address, s1.percentage, s1.subject);
    return 0;
}
/*
int a=65;
int array[10]={10,20,30,40}

studentinfo

studentname
age
rollno
email
mobile
marks
percentage
grade


outside of the main  before main
struct structurename
{
    datatype variablename;
    datatype variablename;


};


*/