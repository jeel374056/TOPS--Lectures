#include <stdio.h>
union student
{
    int rollno;
    char name[15];
    int age;
    char address[10];
    float percentage;
    char subject[20];
};
int main()
{
    union student s1;
    printf("%d", sizeof(s1));

    return 0;
}
/*
int 4 bytes
char 1 bytes
float 4 bytes

union get biggest memory
structure get addition of all memory

array size*one datatype
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
union structurename
{
    datatype variablename;
    datatype variablename;


};


*/