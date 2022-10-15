// describe the structur student having roll no and marks of three subjects of  five students.
// write a program to print all the information and total marks and percentage of each student.

#include<stdio.h>
struct student
{
    int rollno;
    int sub1;
    int sub2;
    int sub3;
};
int main()
{
    int i;
    struct students e[5];
    for(i=0;i<5;i++)
    {
        printf("enter students number %d\n",i);
        scanf("%d %d %d %d",&e[i].rollno,&e[i].sub1,&e[i].sub2,&e[i].sub3);
    }
    for(i=0;i<5;i++)
    {
        printf("student no: %d\n marks for sub1:%d\n marks for sub2:%d\n marks for sub3:%d\n",e[i].rollnumber,e[i].sub1,e[i].sub2,e[i].sub3);

    }
    return 0;
}