// int ,float,char

// int a;

#include <stdio.h>

int main()
{
    int min;
    int a[5] = {11, 1, 11, 2, 1};
    //             2
    //             5,2,7,9,3
    //             5,7,2,9,3
    //             7,5,2,9,3
    //             7,5,9,2,3
    min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Maximum value of the array is %d", min);
    return 0;
}