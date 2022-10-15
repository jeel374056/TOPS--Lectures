#include <stdio.h>
// #include<struct2.c>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    int i;
    struct Employee e[3];
    for (i = 0; i < 3; i++)
    {
        scanf("%d %s %f", &e[i].id, &e[i].name, &e[i].salary);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d %s %f", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}