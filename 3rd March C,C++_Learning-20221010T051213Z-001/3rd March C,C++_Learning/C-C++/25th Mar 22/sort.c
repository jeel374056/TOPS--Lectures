#include<stdio.h>

int main()
{
    int i,j,temp;
    int a[8] = {6,23,1,8,50,12,2,7};
    for(i=0;i<8;i++){
        for(j=i+1;j<8;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i]= a[j];
                a[j] = temp;
            }
        }
        printf("%d ",a[i]);
        // if(i==3){
        //     break;
        // }
    }
return 0;
}