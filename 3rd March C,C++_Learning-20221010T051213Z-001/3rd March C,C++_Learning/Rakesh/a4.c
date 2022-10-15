// write a program to find out second smallest number from the array.
#include<stdio.h>
int main()
{
    int i,min,secmin;
    int a[10]={2,11,19,21,19,58,3,10,9,23};
    min=a[0];
    secmin=a[1];
    for(i=0;i<10;i++)
    {
       if(a[i]<min)
       {
           secmin=min;
        min=a[i];
       }
       else if(a[i]<secmin && a[i]!=min)
       {
           secmin=a[i];
       }
    }
    printf("minimum value of array is %d\n",min);
    printf("second minimum value of array is %d\n",secmin);

    return 0;
}