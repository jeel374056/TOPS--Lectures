#include <stdio.h>
int main()
{
    FILE *fp;
    int age = 58;
    fp = fopen("demo.xls", "w");
    fprintf(fp, "New Age= %d", age);

    fclose(fp);
    return 0;
}
/*
FILE *filepointername;

file open
filepointername=fopen("filename","modes")
r--read---if file exists then it open for reading purpose ..if not exists then it gives error
w---if file exists then it open for writing purpose and its all content will be deleted and if file not exists then it will create a new one
a--if file exists then it open for writing purpose and its all content will not be deleted and if file not exists then it will create a new one

file work


file close
fclose(filepointername)

*/