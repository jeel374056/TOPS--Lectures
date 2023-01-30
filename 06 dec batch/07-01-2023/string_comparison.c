#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "Hellot";
    char str2[20] = "Hellop";
    int ans = strcmp(str1, str2);
    printf("Answer=%d", ans);

    return 0;
}
/*
0 ----same
1   ---when first is greater than second
-1   ---when first is smaller than second

hello
heLlo

*/