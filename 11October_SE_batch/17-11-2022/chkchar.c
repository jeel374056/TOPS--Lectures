#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    gets(name);
    int i = 0;
    while (name[i] > '\0')
    {
        char temp1[100] = strcat(name[i], "\0");
        char temp2[100] = strcat("a", "\0");
        if (strcmp(temp1, temp2) == 0)
        {
            printf("A is found");
        }
        i++;
    }
    return 0;
}