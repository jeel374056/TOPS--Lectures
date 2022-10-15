// write a program to convert the string from uppercase to lowercase and vice versa.
#include<stdio.h>
int main()
{
    char s[100];
    int i;
    printf("enter the string : ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&& s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    printf("\n string in lower case = %s",s);
}