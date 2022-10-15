// write a program to find out the lenght of given string without using string function.
#include<stdio.h>
int main()
{
    char string[50];
    int i,length=0;
    printf("enter the string \n");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }
    printf("the length of a string is the number of character in it \n");
    printf("so,the lenght of %s = %d\n",string,length);
}