#include <stdio.h>
int main()
{
    FILE *fp; // FILE POINTER CREATION
    // fp=fopen("FIlename","mode");
    char sentence[100] = "frkf jkhfwejkf kjhffh jkfh";
    char ch;
    printf("%c", sentence[-4]);
    fp = fopen("demo.txt", "r");
    do
    {
        ch = getc(fp);
        printf("%c", ch);
        // if (ch == " ")
        // {
        //     printf("\n");
        // }
        // else
        // {
        //     printf("%c", ch);
        // }
    } while (ch != EOF);

    fclose(fp);
    return 0;
}

/*
EOF --  End Of File

*/