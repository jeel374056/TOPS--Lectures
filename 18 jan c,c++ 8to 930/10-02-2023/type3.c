// 3)function without parameters and with return value
#include <stdio.h>
int addition()
{
    int a;
    int b;
    printf("Enter Twio Value: ");
    scanf("%d %d", &a, &b);
    int answer = a + b;
    return answer;
}

int main()
{
    int sum = addition();
    printf("Addition=%d\n", sum);
    int addit = addition();
    printf("Addition=%d\n", addit);
    return 0;
}