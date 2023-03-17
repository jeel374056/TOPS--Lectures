#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";
    // strcat(str1, str2);
    strcat(str2, str1);
    printf("string1=%s \nstring2%s", str1, str2);
    return 0;
}