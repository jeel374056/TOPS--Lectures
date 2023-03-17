#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("demo1.txt", "a");
    fclose(fp);

    return 0;
}
/*
file open
FILE *pointername
pointername=fopen("Filename","Mode")
mode----
r---read---If file exist then it open for reading purpose
and if file not exists then it gives error

w---write----If file exist then it open for writing purpose
but all old content will be deleted and if file not exist  then it create a new file

a---append----If file exist then it open for append purpose
but all old content will not be deleted and if file not exist  then it create a new file

file work

file close
fclose(pointername);

*/