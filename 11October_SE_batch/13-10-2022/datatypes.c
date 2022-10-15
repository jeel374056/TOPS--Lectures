#include<stdio.h>
int main()
{
/*
datatypes:
int--- negative positive number without decimal 0 5 6 8 9
float---decimal values 1.2 5.9 4.88
char ----single character  'a' 'v' 'v'
char name[]=''  ""
*/
int num= 11;
float deci=9.958645656544;
char one='h';
char name[]="sahil";
// printf("format_specifier",variable_name);
printf("%d",num);
printf("%.1f",deci);
printf("%c",one);
printf("%s",name);
// printf(num);
return 0;
}