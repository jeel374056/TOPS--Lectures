#include<stdio.h>
int main()
{
int arr[10];
for(int i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
}
for(int j=0;j<10;j++)
{
    if(arr[j]%2==0)
    {
        printf("%d is even",arr[j]);
    }
    else{
        printf("%d is odd", arr[j]);
    }
}

return 0;
}