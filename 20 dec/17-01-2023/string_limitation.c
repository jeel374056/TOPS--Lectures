#include<stdio.h>
#include<string.h>
int main()
{
int a=45;
int b=a;
printf("a=%d b=%d",a,b);

char first[20]="hello world";
char second[20]=first;

printf("1st=%s 2nd=%s",first,second);
// 25<48
// hellop<bfwhhwerf
return 0;
}
/*
strlen() -- string length
strcpy() ---copy one string into another
strcat() ---string concatenation means joining of two string
strupr() ---convert any string into uppercase
strlwr() --convert any string into lower case
strrev() ---it reverses any string
strcmp() --it compares two string


*/