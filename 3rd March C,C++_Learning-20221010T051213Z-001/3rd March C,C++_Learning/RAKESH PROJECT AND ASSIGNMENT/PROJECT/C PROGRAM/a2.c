// write a program to find out max number from given 10 elements from the array. 
#include<stdio.h>
int main()
{
    int i,max,sec;
    int a[10]={2,11,19,21,19,58,3,10,9,23};
    max=a[0];
    sec=a[1];
    for(i=0;i<10;i++)
    {
       if(a[i]>max)
       {
           sec=max;
        max=a[i];
       }
       else if(a[i]>sec && a[i]!=max)
       {
           sec=a[i];
       }
    }
    printf("maximum value of array is %d\n",max);
    printf("maximum value of array is %d\n",sec);

    return 0;
}
