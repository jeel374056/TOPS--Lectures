#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter your name: ");
    // scanf("%s", name);
    gets(name);
    printf("Your name is %s", name);
    // puts(name);
    return 0;
}