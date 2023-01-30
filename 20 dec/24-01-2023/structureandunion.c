#include <stdio.h>
struct employee
{
    int id;
    char name[20];
    int age;
    char email[40];
};
int main()
{
    int a = 98;
    int b[20];
    struct employee e[5];
    printf("%d", sizeof(e));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Name,age,id,email ");
        scanf("%s %d %d %s", e[i].name, &e[i].age, &e[i].id, e[i].email);

        printf("Name : %s\nAge : %d\nId : %d\nemail : %s\n", e[i].name, e[i].age, e[i].id, e[i].email);
    }

    return 0;
}
/*
struct structure_name
{
    datatype member1;
    datatype member2;
    datatype member3;
    ....
    ....
    datatype membern;

    int a;

    int a[5];

    for(int i=0;i<5;i++)
    {
        printf("%d",a[i])
    }
}

*/