#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int age;
    int id;
    char address[100];
    for (int i = 1; i < 5; i++)
    {
        printf("Enter Name:");
        gets(name);
        printf("Enter Address:");
        gets(address);
        printf("Enter Age:");
        scanf("%d", &age);
        printf("Enter Id:");
        scanf("%d", &id);
    }
    return 0;
}