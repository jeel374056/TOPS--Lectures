#include <stdio.h>
#include <string.h>
int main()
{
    char n1[10] = "hello";
    char n2[10];
    strcpy(n2, n1); // strcpy(destination,source)
    printf("n1=%s n2=%s", n1, n2);
    
    return 0;
}