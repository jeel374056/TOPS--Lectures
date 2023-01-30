#include <stdio.h>
int main()
{
    char name[50];
    int age;
    unsigned long mobile;
    printf("Enter Name: ");
    gets(name);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Mobile: ");
    scanf("%lu", &mobile);
    printf("Fullname=%s\nage=%d\nmobile=%lu\n", name, age, mobile);

    return 0;
}