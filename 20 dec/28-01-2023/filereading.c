#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("C:/Users/Sugandh/Desktop/Sugandh Lectures/Lectures/demo.txt", "r");
    do
    {
        ch = getc(fp);
        printf("%c", ch);
    } while (ch != EOF); // END OF FILE
    fclose(fp);

    return 0;
}
/*
file reading


charcater by character file read


*/