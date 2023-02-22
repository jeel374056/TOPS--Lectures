#include <stdio.h>
int main()
{
    FILE *fp;
    int age = 58;
    char ch;
    fp = fopen("demo.txt", "r");
    do
    {
        ch = getc(fp);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(fp);
    return 0;
}