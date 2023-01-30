#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    char copy_name[50];
    printf("Enter name: ");
    gets(name);
    strcpy(copy_name, name);
    printf("Name =%s", copy_name);
    return 0;
}
/*
strcpy(jisme copy karna hai,jisse copy karna hai)

*/