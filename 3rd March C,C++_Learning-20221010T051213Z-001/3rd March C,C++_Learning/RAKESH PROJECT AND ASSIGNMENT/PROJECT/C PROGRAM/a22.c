// write a program to print the string in reverse order using function.
#include<stdio.h>
#include<string.h>
int revstr(char *str1)
{
    int i,len,temp;
    len=strlen(str1);
    for(i=0;i<len/2;i++)
    {
        temp=str1[i];
        str1[i]=str1[len-i-1];
        str1[len-i-1]=temp;
    }
}
int main()
{
    char str[50]="rakesh";
    printf("\n before reversing the string : %s\n",str);
    revstr(str);
    printf("after reversing the string :%s",str);
}