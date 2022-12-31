#include <stdio.h>
int main()
{
    int aaray[10];
    // printf("%d ", aaray[0]);
    // printf("%d ", aaray[1]);
    // printf("%d ", aaray[2]);
    // printf("%d ", aaray[3]);
    // printf("%d ", aaray[4]);
    // printf("%d ", aaray[5]);
    for(int i=0;i<10;i++)
    {
        scanf("%d",&aaray[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", aaray[i]);
    }
    return 0;
}
/*
int a; //variable declaration
a=10;   //variable initialization
a=25;
int m=85;  //declaration with initilization

array
array is a collection of values of same dtataype

array declaration
datatype arrayname[max_size];
int arr[20];

array initization
arrayname ={value1,value2.......};
arr={50,98,45,14,25};

declaration with initilization
int arr1[55]={45,87,89,63,25,41,54};

index position 0





*/