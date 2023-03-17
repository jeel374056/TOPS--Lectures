#include <stdio.h>
int main()
{
    int m = 1;
    int k = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", j%2);
            m++;
        }
        k++;
        printf("\n");
    }

    return 0;
}
/*
*
* *
* * *
* * * *
* * * * *

* * * * *
* * * *
* * *
* *
*


*/