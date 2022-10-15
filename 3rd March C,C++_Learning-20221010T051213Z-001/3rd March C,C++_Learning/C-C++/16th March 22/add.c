#include <stdio.h>

int main()
{
    int num=1234567, rem, sum = 0;
    // printf("Enter a number ");
    // scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;  
        if(rem%2!=0){
            sum= sum+rem;
        }
        num = num / 10; 
    }
    printf("%d", sum);
    return 0;
}