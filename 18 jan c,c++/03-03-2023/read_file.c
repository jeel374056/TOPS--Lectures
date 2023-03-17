#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("Demo.txt", "r");
    while (ch != EOF) 
    {
        ch = getc(fp);
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}