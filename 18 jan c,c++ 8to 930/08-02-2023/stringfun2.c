#include <stdio.h>
#include <string.h>
int main()
{
    int a = 45;
    char str1[20] = "Hello";
    char str2[20] = "World";
    // strcpy(str2, str1);
    // strcat(str1, str2);
    // strcat(str1, str1);
    // strupr(str1);
    // strlwr(str2);
    strrev(str2);
    printf("Str1=%s\nStr2=%s", str1, str2);
    return 0;
}
/*
strcpy(destination_string,source_string)
strcat(string1,string2)

*/