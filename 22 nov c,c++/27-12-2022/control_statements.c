#include <stdio.h>
int main()
{
    for (int i = 1; i < 15; i++)
    {
        printf("%d ", i);
        if (i == 10)
        {
            continue;
        }

    }
    printf("After loop");

    return 0;
}
/*
break;
continue
goto
*/