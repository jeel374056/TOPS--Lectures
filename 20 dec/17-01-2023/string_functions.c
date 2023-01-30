#include<stdio.h>
#include<string.h>
int main()
{
//strlen() ---give length of the string
char sent[100];
printf("Enter Sentence: ");
gets(sent);
// int len=strlen(sent);
// printf("Length= %d",len);

// strupr()convert string into uppercase(Capital words)
// printf("%s",strupr(sent));

// strlwr()convert string into lowercase(Small words)
printf("%s",strlwr(sent));
return 0;
}