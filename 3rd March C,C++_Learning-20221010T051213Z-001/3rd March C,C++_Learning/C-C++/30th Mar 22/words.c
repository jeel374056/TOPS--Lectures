#include <stdio.h>

int main()
{
    char s[100] = "Today is Wednesday";
    int i, count = 1;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            count++;
        }
  
    }
    printf("The words of string is %d", count);
    return 0;
}