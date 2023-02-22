#include <stdio.h>
int main()
{
    FILE *fp;
    int age = 58;
    fp = fopen("demo.txt", "a");
    fprintf(fp, "\nNew Age= %d", age);

    fclose(fp);
    return 0;
}