#include <stdio.h>
int main()
{
    // int array1[10] = {56, 48, 98, 74, 54, 35, 16, 48, 68, 89};
    int array1[10];
    // printf("%d", array1[0]);
    // printf("%d", array1[1]);
    // printf("%d", array1[2]);

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Value: ");
        scanf("%d", &array1[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array1[i]);
    }
    return 0;
}
/*
Array is a collectyion of elements of similar datat type

array declaration;
datatype arrayname[max_size];
int array1[20];

array initialization
arrayname={value1,value2,value3.......valuen}
array1 = {40,50,12,36,54,78,96,58,47,89,68,7}

array declaration with initialization
datatype arryname[max_size]={value1,value2,value3......valuen};
int array1[20]={40,5,0,6,5,8,7,4,5,8,9,8}


index_value starts from 0
*/