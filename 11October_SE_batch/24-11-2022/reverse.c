#include <stdio.h>
int main()
{
    int n1, remainder, n2 = 0;
    printf("Enter Number: ");
    scanf("%d", &n1);
    while (n1 = 0)
    {
        remainder = n1 % 10;
        n2 = n2 * 10 + remainder;
        n1 = n1 / 10;
    }
    
    printf("\nanswer=%d", n2);
    return 0;
}