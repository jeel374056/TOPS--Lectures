#include <stdio.h>
int main()
{
    int i = 0;
    char name[50] = "wowjkufrhgrtuhgt";
    while (name[i] != '\0')
    {
        i++;
    }
    printf("%d", i);
    return 0;
}