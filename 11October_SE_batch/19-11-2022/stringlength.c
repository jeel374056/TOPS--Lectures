#include <stdio.h>
#include <string.h>
int main()
{
    char nump[] = "hello world";
    int len = strlen(nump);
    printf("lenght is %d", len);
    for (int i = 0; i < strlen(nump); i++)
    {
        printf("%d", i);
    }
    return 0;
}