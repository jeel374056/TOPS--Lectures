#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = "Today is wednesday";
    // int l = strlen(s);
    // printf("The length of string is %d",l);
    int i, count = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count++;
        }
        count++;
    }
    printf("The letters of string is %d", count);
    return 0;
}