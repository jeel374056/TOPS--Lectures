#include <stdio.h>
int main()
{
    char str1[10] = "Hello World";
    char str2[10] = str1;
    printf("str1=%s str2=%s", str1, str2);
    // int a = 40;
    // int b = a;
    // printf("A=%d b=%d", a, b);
    // 40>50
    // "wrshbfeirij" >"wefhuhwwiojwef"
    return 0;
}
/*
string functions
#include<string.h>

strlen(string) ----gives length of string
strcpy(string1,string2) ---copy one string into another
strcat()   ---conatenate one string with another
strlwr()    ---converts all string in lower case
strupr()    ---converst whole string in uppercase
strcmp()    ----compares two string
strrev()    ---reverse the stirng

*/