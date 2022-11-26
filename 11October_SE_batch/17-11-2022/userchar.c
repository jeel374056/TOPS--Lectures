#include <stdio.h>
#include <string.h>
int main()
{
    /*
    hello
    hero
    */
    char name[100];
    printf("Enter Name: "); // sugandh
    gets(name);
    char chk[100] = "\0";
    // printf("%c", name[0]);
    // printf("%c", name[1]);
    printf("%d", strcmp(name, chk));
    // int i = 0;
    // while (strcmp(name[i], '\0') == 0)
    // {
    //     printf("inside loop");
    //     if (strcmp(name[i], "a") == 0)
    //     {
    //         printf("a is found");
    //         break;
    //     }
    //     i++;
    // }
    return 0;
}