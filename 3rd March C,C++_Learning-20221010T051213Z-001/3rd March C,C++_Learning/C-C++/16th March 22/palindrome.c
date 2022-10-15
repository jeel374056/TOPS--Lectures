#include<stdio.h>

int main()
{
    int num=122,sum=0,rem,temp=num;
    while(num!=0){
        rem = num%10;      
        sum = sum*10 +rem;     
        num/=10;    
    }
    if(temp==sum){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not plindrome");
    }
return 0;
}