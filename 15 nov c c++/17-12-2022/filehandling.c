#include <stdio.h>
int main()
{
    FILE *fp; // FILE POINTER CREATION
    // fp=fopen("FIlename","mode");
    char sentence[55];
    printf("Enter your Sentence: ");
    // scanf("%s", &sentence);
    gets(sentence);
    fp = fopen("demo.txt", "a");
    fprintf(fp, "%s", sentence);
    fclose(fp);
    return 0;
}
/*
create file pointer
FILE *pointername

file open
pointername=fopen("Filename","Mode")
filename as your choice or present earlier
Modes

read mode ---r--- if file exist then open for read purpose if not exist then gives error

write mode---w--- if file exist then it removes all old content and if file not exist creates a new file but not give error

append mode---a---if file exist then it will continue from pointer position if file not exist then creates a new one
but not gives error

read and write--r+---if file exist then open for read purpose if not exist then gives error also used to write in a file

read and write---w+---- if file exist then it removes all old content and if file not exist creates a new file but not give error
and also used for reading

read and write---a+----if file exist then it will continue from pointer position if file not exist then creates a new one
but not gives error and also used for reading

File Closing
fclose(filepointer name);

*/