#include <stdio.h>
#include <string.h>
int main()
{
    int answer;
    char string1[20] = "Zebra";
    char string2[20] = "Zebra";
    answer = strcmp(string1, string2);
    printf("Your answer is %d", answer);
    return 0;
}