#include <stdio.h>
int main()
{
    int rollno, age;
    char name[20];
    printf("Enter Rollno: ");
    scanf("%d", &rollno);
    printf("ENter Age:");
    scanf("%d", &age);
    printf("Enter NAme: ");
    // scanf("%s", name);
    scanf(" ");
    gets(name);
    printf("Your name is %s your roll no is %d and your age is %d", name, rollno, age);
    ;
    return 0;
}
/*
char strinfgname[size]="VAlues";



*/