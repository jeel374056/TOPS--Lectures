#include <stdio.h>
struct employee
{
    int id, age, salary;
    char name[25];
} emp[100];

void main()
{
    int i, n;
    printf("Enter the no of employees\n");
    scanf("%d", &n);
    printf("Enter employee info as id , name , age , salary\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %d %d", &emp[i].id, emp[i].name, &emp[i].age, &emp[i].salary);
    }
    printf("--------------------------------------------------");
    printf("\nEMP_NAME\t|\tEMP_NAME\t|\tEMP_AGE\t|\tEMP_SAL\n");
    printf("--------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d\t|\t%s\t|\t%d\t|\t%d\n", emp[i].id, emp[i].name, emp[i].age, emp[i].salary);
    }
    printf("--------------------------------------------------");
}