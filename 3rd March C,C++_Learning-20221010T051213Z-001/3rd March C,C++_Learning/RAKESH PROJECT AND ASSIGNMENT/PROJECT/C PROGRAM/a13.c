// write a program to count the total number of word from given string without using string function.
#include<stdio.h>
int main()
{
    char s[100];
    int i,word =0;
    printf("enter the string : ");
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]==32)
        {
            word++;
        }
    }
    if(i>0)
    word++;
    printf("no of word in string =%d \n ",word);
    return 0;
}