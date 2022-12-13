#include <stdio.h>
int main()
{
    int array1[5], sum = 0;
    // printf("%d", sizeof(array1));
    // for (int i = 0; i < 7; i++)
    // {
    //     printf("%d\n", array1[i]);
    // }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Values: ");
        scanf("%d", &array1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + array1[i];
    }
    printf("\n sum=%d", sum);

    return 0;
}
/*
datatype arrayname[Max_size]={value1,value2,value3.....};
*/