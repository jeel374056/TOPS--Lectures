// write a program to make string reverse and check the given string is palindrom or not palindrom using string function.
#include<stdio.h>
int main()
{
    char string[25],reverse_string[25]={'\0'};
    int i,length=0,flag=0;
    printf("enter a string \n ");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }
    printf("the length of the string '%s' =%d\n",string,length);
    for(i=length-1;i>=0;i--)
    {
        reverse_string[length-i-1]=string[i];
    }
    for(flag=1;i<length;i++)
    {
        if(reverse_string[i]!= string[i])
        {
            flag =0;
        }
    }
    if(flag==1)
    {
        printf("%s is a palindrom \n",string);
    }
    else
    {
        printf("%s is a not palindrom \n",string);
    }
    return 0;
}