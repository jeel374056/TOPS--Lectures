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
    int num;
    printf("Enter total Student: ");
    scanf("%d", &num);
    struct student s[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter Rollno: ");
        scanf("%d", &s[i].rollno);
        printf("Enter Name: ");
        scanf(" ");
        gets(s[i].name);
        printf("Enter Age: ");
        scanf("%d", &s[i].age);
        printf("Enter Address: ");
        scanf(" ");
        gets(s[i].address);
        for (int i = 0; i < 5; i++)
        {
            printf("Enter Marks: ");
            scanf("%d", &s[i].marks[i]);
        }
        printf("Name =%s \nage=%d\nrollno=%d\naddress=%s\n", s[i].name, s[i].age, s[i].rollno, s[i].address);
        for (int i = 0; i < 5; i++)
        {
            printf("Marks=%d\n", s[i].marks[i]);
        }
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