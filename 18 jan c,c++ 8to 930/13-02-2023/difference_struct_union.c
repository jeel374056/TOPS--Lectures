#include <stdio.h>
union student
{
    int rollno;
    char name[20];
    int age;
    char address[40];
    int marks[5];
};
int main()
{
    union student s1, s2, s3;
    printf("%d", sizeof(s1));
    return 0;
}
/*
struct structurename
{
    datatype1 variable1;
    datype2 variable2;
}


*/