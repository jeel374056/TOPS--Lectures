// writeb a program to copy string from one string to other string without using string function.
#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i;
    printf("enter the string : ");
    gets(s1);
    i=0;
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
    printf("\n copied string is : %s ",s2);
    return 0;

}