//A27. Write a program of structure for five employee that provides the following information -print and display empno,empname,address and age.
#include<stdio.h>
struct address
{
    int plotno;
    char societyname[20];
    char city[10];
    char state[10];
    int pincode;
};
struct employee
{
    int no;
    char name[10];
    int age;
    struct address adr;
};
int main()
{
    int i;
    struct employee e[5];
    for(i=0;i<5;i++)
    {
        printf("employee number %d\n",i);
        scanf("%d %s %d %d %s %s %s %d",&e[i].no,&e[i].name,&e[i].age,&e[i].adr.plotno,&e[i].adr.societyname,&e[i].adr.city,&e[i].adr.state,&e[i].adr.pincode);
    }
    for(i=0;i<5;i++)
    {
        printf("employee number :%d employee name:%s employee age:%d plot no:%d pincode no:%d,societyname:%s city:%s stste:%s pincode:%d",e[i].no,e[i].name,e[i].age,e[i].adr.plotno,e[i].adr.societyname,e[i].adr.city,e[i].adr.state,e[i].adr.pincode);

    }
    return 0;
}