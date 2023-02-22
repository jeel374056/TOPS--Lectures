#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    printf("Enter Sentence: ");
    gets(str1);
    int len = strlen(str1);
    printf("Lenght=%d", len);
    return 0;
}