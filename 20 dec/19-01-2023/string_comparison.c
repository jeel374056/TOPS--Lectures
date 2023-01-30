#include <stdio.h>
#include<string.h>
int main()
{
    int answer;
    char string1[50] = "wonderful";
    // char string2[50] = "wonderful";
    // answer = strcmp(string1, string2);
    // printf("Comparsion=%d", answer);
    printf("%s",strrev(string1));
    return 0;
}
/*

88<45
"Hello">"Mormning"

strcmp(string1,string2)
1
-1
0
*/