#include <stdio.h>
#include <string.h>
int main()
{
    int length;
    char senetecne[100];
    printf("Enter Sentence: ");
    gets(senetecne);
    length = strlen(senetecne);
    printf("%d", length);
    return 0;
}