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