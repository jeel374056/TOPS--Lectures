#include <stdio.h>
#include <string.h>
int main()
{
    char first[20] = "Mohan is my name";
    char second[20] = "20";
    strrev(first);//string reverse
    // strcat(first, second); // strcat(destination,source)
    printf("%s", first);
    return 0;
}