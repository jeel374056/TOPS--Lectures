#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100] = "sfhws whfw whgf";
    char str2[100];
    strcpy(str2, str1);
    printf("str1=%s\nstr2=%s", str1, str2);
    return 0;
}
/*

strcpy(jisme copy karana hai ,  jisse copy karna hai)
strcpy(destination,source);
*/