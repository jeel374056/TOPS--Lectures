//write a program make string revrese using recursive function.
#include<stdio.h>
void swap(char *x,char *y)
{
    char temp = *x;
    *x =*y;
    *y = temp;
}
void reverse(char *str,int k)
{
    static int i=0;
    if(*(str + k) == '\0' )
    {
        return 0;
    }
    reverse(str, k+1);
    if(i<=k)
    {
        swap(&str[i++], &str[k]);
    }
}
int main()
{
    char str[] ="tops technology";
    revrese(str, 0);
    printf("reverse of the given string is %s", str);
    return 0;
}