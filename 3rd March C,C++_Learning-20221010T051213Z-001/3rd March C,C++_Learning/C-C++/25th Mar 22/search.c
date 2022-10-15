#include <stdio.h>

int main()
{
    int i, element,flag=0;
    int a[7];
    printf("Enter the value, that you are searching for ");
    scanf("%d", &element);
    for (i = 0; i < 7; i++)
    {
        printf("ENter the value of %d index position ",i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<7;i++){
        if(a[i]==element){
            flag = 1;
            break;
        }
    }

    if(flag==0){
        printf("Element %d is not found at any index position",element);
    }
    else{
        printf("Element %d is found at %d index position",element,i);
    }
    return 0;
}