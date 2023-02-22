#include <stdio.h>
struct employee
{
    char name[20];
    int id;
    int age;
    int salary;
    int mobile;
    char address[40];
};
int main()
{
    int num;
    printf("Enter number Of employee: ");
    scanf("%d", &num);
    struct employee s[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter Name: ");
        scanf(" ");
        gets(s[i].name);
        printf("Enter ID: ");
        scanf(" ");
        scanf("%d", &s[i].id);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter mobile : ");
        scanf("%d", &s[i].mobile);
        printf("Enter salary : ");
        scanf("%d", &s[i].salary);
        printf("Enter Address : ");
        scanf(" ");
        gets(s[i].address);
    }
    printf("\n-----------------------------------------------------------------------\n");
    printf("Name\t\t\t| ID\t| age\t| mobile\t| salary\t| address\t\t");
    for (int i = 0; i < num; i++)
    {
        printf("\n--------------------------------------------------------------------\n");
        printf("%s\t\t| %d\t| %d\t| %d\t| %d\t| %s\t\t\n", s[i].name, s[i].id, s[i].age, s[i].mobile, s[i].salary, s[i].address);
    }

    printf("\n-----------------------------------------------------------------\n");
    return 0;
}