#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter Value: ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        int answer = num * i;
        printf("%d X %d = %d\n", num, i, answer);
        // printf("%d X %d = %d", num, i, num * i);
    }

    return 0;
}
// num X i = num*i