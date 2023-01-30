#include<stdio.h>
int main()
{
FILE *fp;
char sentence[100];
fp=fopen("demo.txt","r");
// printf("Enter Sentence: ");
// gets(sentence);
// fprintf(fp,"%s",sentence);
    char ch;
do
{
    ch=getc(fp);
    printf("%c",ch);
}while(ch!=EOF);
fclose(fp);
return 0;
}

/*
file handling
file pointer
FILE *filepointername
ex--FILE *fp;


file open    
filepointername=fopen("filename_in_doublequotes","file_mode_doublequotes");
mode--- kis kaam ke liye open karna hai

read mode ---r--if file exist then it open for reading purpose
and if not prsent then it will give error

write mode---w---if file exist then open for writing purpose
and also all old data will be clear
and if file not exist then it will not give error but it will create a new file

append---a--if file exist then it open for append purpose and old data will not be deleted
 and if not exists then it will also not give error but it will create a new file 





file work




file close
fclose(filepointername)

*/