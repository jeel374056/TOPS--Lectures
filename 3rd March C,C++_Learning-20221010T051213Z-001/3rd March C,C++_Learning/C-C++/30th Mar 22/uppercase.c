#include<stdio.h>

int main()
{
    char s[100] = "jaydeep";
    int i;
    for(i=0;s[i]!='\0';i++){
        s[i]=s[i]-32;
    }
    printf("String in uppercase is %s",s);
return 0;
}