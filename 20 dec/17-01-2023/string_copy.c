#include <stdio.h>
#include<string.h>
int main()
{
    char sent[100], copy_sent[100];
    printf("Enter Senetence: ");
    gets(sent);
    strcpy(copy_sent, sent);
    printf("%s", copy_sent);
    return 0;
}
/*
strcpy(jisme copy karna hai,jisse copy krna hai);
strcpy(destination,source)

*/