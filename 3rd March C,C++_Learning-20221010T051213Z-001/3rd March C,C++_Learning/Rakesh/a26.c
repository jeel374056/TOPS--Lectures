// write a program of structure employee that provides the following informationprint and display empno,empname,address and age.
#include<stdio.h>
struct employee
{
    int eno;
    char name[20];
    char address[100];
    int age;
};
int main()
{
    printf("employe details :\n");
    struct employee e1;
    e1.eno;
    printf("enter employee number : ");
    scanf("%d",&e1.eno);
    e1.name;
    printf("enter employee name : ");
    scanf("%s",&e1.name);
    e1.address;
    printf("enter employee address : ");
    scanf("%s",&e1.address);
    e1.age;
    printf("enter emplyee age : ");
    scanf("%d",&e1.age);
    return 0;
}