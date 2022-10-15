#include<stdio.h>

int main()
{
    int i,max,sec;
    int a[7] = {2,11,19,21,19,21,15};
    max = a[0];
    sec = a[1];
    for(i=0;i<7;i++){
        if(a[i]>max){
            sec = max;
            max = a[i];
        }
        else if(a[i]>sec && a[i]!=max){
            sec = a[i];
        }
    }
    printf("Maximum value of the array is %d\n",max);
    printf("Second Maximum value of the array is %d",sec);
return 0;
}