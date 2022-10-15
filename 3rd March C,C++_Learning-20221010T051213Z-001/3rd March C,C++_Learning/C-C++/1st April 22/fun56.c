#include<stdio.h>
void fact(int n){
    int f=1,i;
    for(i=1;i<=n;i++){
        f = f*i;
    }
    printf("Factorial of %d is %d",n,f);
}

int main()
{
    int a;
    printf("Enter the value for which factoral you are searching? ");
    scanf("%d",&a);
    fact(a);
return 0;
}