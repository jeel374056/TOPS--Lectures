#include <stdio.h>
#include <string.h>
int main()
{
    char name[20], surname[20];
    printf("Enter Name: ");
    gets(name);
    printf("Enter surName: ");
    gets(surname);
    // strcat(name, surname);
    strcat(surname,name);
    printf("name=%s surname=%s", name, surname);
    return 0;
}
/*
strcat(firststring ,secondstring)
strcat("hello","world")


firststringsecondstring

*/