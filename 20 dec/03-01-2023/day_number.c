#include <stdio.h>
int main()
{
    int num;
    printf("Enter number From 1 to 7");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("monday");
    }
    else if (num == 2)
    {
        printf("tuesday");
    }
    else if (num == 3)
    {
        printf("wed");
    }
    else if (num == 4)
    {
        printf("thur");
    }
    else if (num == 5)
    {
        printf("fri");
    }
    else if (num == 6)
    {
        printf("saturday");
    }
    else if (num == 7)
    {
        printf("sunday");
    }
    else
    {
        printf("Wrong value");
    }
    return 0;
}