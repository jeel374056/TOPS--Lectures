#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[100];
    printf("Enter Senetence: ");
    gets(sentence);
    int len = strlen(sentence);
    printf("Length of string is %d", len);
    printf("\n%s", sentence);

    return 0;
}
/*
#include<string.h>

strlen() ---count length of string
strcpy()--copy one string into another
strcat()  ---conacatenate two string addition or jodna
strlwr() --converts any string into lower case
strupr() ---converts string into upper case
strrev() ---reverse any string
strcmp() ---compares two string

*/