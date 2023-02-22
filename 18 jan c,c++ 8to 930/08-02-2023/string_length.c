#include <stdio.h>
int main()
{
    char str1[100];
    printf("Enter Sentence: ");
    gets(str1);
    int i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    printf("%d", i);
    return 0;
}