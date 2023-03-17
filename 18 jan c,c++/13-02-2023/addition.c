#include <stdio.h>
int main()
{
    int a, b, ans;

    printf("Enter Value: ");
    scanf("%d", &a);

    printf("A=%d",a);

    printf("Enter Value: ");
    scanf("%d", &b);

    printf("B=%d",b);
    
    int ans = a + b;

    printf("%d", ans);

    return 0;
}