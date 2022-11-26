#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "hari";
    // gets(str1);
    char str2[100] = "\0";
    printf("%d", strcmp(str1[4], str2));

    return 0;
}
// ascii value....
// greater first value---   +1
// smaller first value---   -1
// same value  ----- 0
