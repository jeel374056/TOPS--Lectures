#include <stdio.h>
int main()
{
    int array1[50] ;
    // printf("%d", array1[0]);
    // printf("%d", array1[1]);
    // printf("%d", array1[2]);
    // printf("%d", array1[3]);
    // printf("%d", array1[4]);
    // printf("%d", array1[5]);
    // printf("%d", array1[6]);
    // printf("%d", array1[7]);
    for(int i=0;i<10;i++)
    {
        printf("Enter number: ");
        scanf("%d",&array1[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ", array1[i]);
    }
    return 0;
}
/*
array declaration

datatype arrayname[maxsize];

array initialization
arrayname={10,20,30,40,50,60,70}

decalartion with initialization

datatype arryname[max_size]={values1,value2......valuenn}


*/