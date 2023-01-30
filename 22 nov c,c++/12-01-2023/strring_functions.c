#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int a;
    printf("Enter String: ");
    gets(name);
    // a = strlen(name);
    // printf("length of string= %d", a);
    // strupr(name);
    // strlwr(name);
    // strrev(name);
    printf("Name=%s", name);

    return 0;
}