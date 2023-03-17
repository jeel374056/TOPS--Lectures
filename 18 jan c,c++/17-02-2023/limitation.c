#include <stdio.h>
int main()
{
    int a = 45;
    int b = a;
    char str1[20] = "Hello";
    char str2[20] = str1;
    printf("str=%s str2=%s", str1, str2);
    printf("a=%d b=%d", a, b);
    return 0;
}
/*/
48 > 55
58 == 58
98<= 98
"hello">= "Special"

string functions
strlen() ---string length --gives length of string
strcpy() ---string copy ---copy one string into another
strcmp() ---string comparison --compares two string
strrev() --string reverse ---reverse the string
strlwr() --string lower ---converts all letters of string into lowercase
strupr() --string upper ---converts all letters into uppercase
strcat() --string concatenation ---joins two string

*/