#include <stdio.h>
int main()
{
    // int arr[10];
    int arr[5], sum=0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter elements: ");
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        sum+=arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\nsum=%d", sum);

    return 0;
}

/*
int a=50;
a=48;


variable

variable declaration
int a;

variable initialization or value assigning
a=10;

array declaration;
datatype arrayname[size];

array initialization
arrayname={value1,value2,value3.....};



*/