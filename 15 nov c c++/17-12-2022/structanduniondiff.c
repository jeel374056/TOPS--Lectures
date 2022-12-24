#include<stdio.h>
struct employee{
    int age;
    char name[50];
    int salary;
};
union employee1{
    int age;
    char name[50];
    int salary;
};
int main()
{
struct employee e1;
union employee1 e2;
printf("%d\n",sizeof(e1));
printf("%d\n",sizeof(e2));
return 0;
}