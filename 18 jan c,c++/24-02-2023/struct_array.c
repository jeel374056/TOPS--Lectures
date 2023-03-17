#include <stdio.h>
struct student // union
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
    struct student s[3]; // union
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Rollno: ");
        scanf("%d", &s[i].rollno);
        printf("Enter Name: ");
        scanf(" ");
        gets(s[i].name);
        printf("Enter Age: ");
        scanf("%d", &s[i].age);
        printf("Enter Address");
        scanf(" ");
        gets(s[i].address);
        printf("Enter Percentage: ");
        scanf("%f", &s[i].percentage);
        printf("Enter Subject: ");s[3];
        scanf(" %s", s[i].subject);
    }

    printf("\n--------ALL DATA-------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("NAme= %s\nRollno=%d\nAge=%d\nAddress=%s\npercentage=%f\nsubject=%s\n", s[i].name, s[i].rollno, s[i].age, s[i].address, s[i].percentage, s[i].subject);
    }
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