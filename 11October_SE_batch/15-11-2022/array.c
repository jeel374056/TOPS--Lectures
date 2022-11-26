#include <stdio.h>
int main()
{
    int b = 29, i;
    int a[6] = {10, 55, 48, 69, 58, 78};
    printf("Enter Index you want to know:");
    scanf("%d", &i);
    printf("value of your index is %d", a[i]);
    // printf("%d", a[]);
    for (int i = 0; i < 6; i++)
    {
        printf("\n%d\n", a[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        
    }
    return 0;
}
/*

array is a collection of elements of similar datatype

datatype arrayname[size]={value1,value2,value3......}

0 indexing
*/