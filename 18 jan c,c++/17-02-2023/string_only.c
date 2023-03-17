#include <stdio.h>
int main()
{
    char sentence[50];
    printf("Enter Sentence: ");
    // scanf("%s", sentence);
    gets(sentence);

    printf("Your sentence is %s", sentence);

    return 0;
}