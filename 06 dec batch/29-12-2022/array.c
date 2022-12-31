#include <stdio.h>
int main()
{
    int arr[20];
    // printf("%d",arr[0]);
    // printf("%d",arr[1]);
    // printf("%d",arr[2]);
    // printf("%d",arr[3]);
    // printf("%d",arr[4]);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
} /*
 array

 array is a collection of values of similar datatype

 array declaration;
 datatype arrayname[max_size];
 int arra1[25];

 aaray initilization:
 arra1={10,20,30,40,50}


declaration with initilization;
 int array2[25]={10,45,48,78,96,36}

int a; //variable declaration
a=55; //initiliazation
int m=95; //declaration with initilization
 */