// write a program to concate two string without using string function.
#include<stdio.h>
void main()
{
    char str1[25],str2[25];
    int i=0,j=0;
    printf("enter the first string : ");
    gets(str1);
    printf("\n enter second string : ");
    gets(str2);
    while(str2[i]!='\0')
    i++;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        j++;
        i++;
    }
    str1[i]='\0';
    printf("\n concated string is %s ",str1);
    return 0;
}