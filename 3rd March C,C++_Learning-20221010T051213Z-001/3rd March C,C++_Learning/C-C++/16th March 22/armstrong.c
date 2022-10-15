#include<stdio.h>

int main()
{
    int num=1634,sum=0,rem,temp=num;
    while(num!=0){
        rem = num%10;     
        sum = sum +(rem*rem*rem*rem);         
        num/=10;     /
    }
    if(temp==sum){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }
return 0;
}