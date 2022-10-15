#include<stdio.h>

int main()
{
    int i,j,sum=0;
    int a[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the value of a[%d][%d] index position ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Your matrix is .....\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    i=2;
    for(j=0;j<3;j++){
        sum = sum+a[i][j];
    }
    printf("%d",sum);
return 0;
}