#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct Employee e1 = {1, "Sid", 123.4};
    printf("%d\n", e1.id);
    printf("%s\n", e1.name);
    printf("%f\n", e1.salary);

    return 0;
}