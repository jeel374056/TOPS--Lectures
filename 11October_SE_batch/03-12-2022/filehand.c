#include <stdio.h>
int main()
{
    char sent[50] = " turn ";
    char ch;
    FILE *fp;
    // fp = fopen("t1.txt", "r");
    // printf("%ld", ftell(fp));
    // fprintf(fp, "%s", sent);
    // fclose(fp);
    fp = fopen("t1.txt", "r");
    fseek(fp, -9, SEEK_END);
    while (ch != EOF)
    {
        // fscanf(fp, "%s", &sent);
        ch = fgetc(fp);
        printf("%c", ch);
        ch = fgetc(fp);
        printf("%c", ch);
    }
    return 0;
}