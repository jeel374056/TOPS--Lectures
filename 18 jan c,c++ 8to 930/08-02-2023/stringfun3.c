#include <stdio.h>
#include <string.h>
int main()
{
    int answer;
    char str1[50] = "Hello";
    char str2[50] = "hello";
    answer = strcmp(str2, str1);
    printf("Answwer=%d ", answer);
    return 0;
}
/*
strcmp(string1,string2)
Hello Helllo
0   --when both strings are totally same even in case
1      ---when first string is greater than second string
-1      ---when first string is smaller than second string


*/