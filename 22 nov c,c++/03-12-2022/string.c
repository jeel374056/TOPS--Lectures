#include <stdio.h>
int main()
{
    //\0--null character
    // char n = 's';
    // char k = 'u';
    // char m = 'r';
    // char stirnname[size]="values";
    // char name[10] = "Surat"; //%s
    // printf("name =%s", name);
    // printf(" %d", sizeof(name));
    char name[200];
    printf("Enter name: ");
    // scanf("%s", name);
    gets(name);
    // printf("name =%s", name);
    puts(name);

    return 0;
}