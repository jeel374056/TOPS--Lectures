#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100] = "hello", s2[100];
    int i, j, l = strlen(s1);
    for (i = 0, j = l - 1; i < l; i++, j--)
    {
        s2[j] = s1[i];
    }
    s2[l] = '\0';
    printf("%s", s2);
    return 0;
}