#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};


int main()
{
    struct Employee Sid;
    Sid.id = 1;
    // gets(Sid.name);
    Sid.salary = 1200.5;
    // puts(Sid.name);
    printf("%d %s %f",Sid.id,Sid.name,Sid.salary);
return 0;
}