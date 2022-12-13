#include <stdio.h>
int recursionfun(int n)
{
    if (n == 0)
        printf("Factorial=1");
    return n * recursionfun(n - 1);
}
// 5>20
// hello+world
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Afc atorial=%d", recursionfun(num));
    // recursionfun();
    // printf("Enter number: ");
    // scanf("%d", &num);
    // for (int i = 1; i <= num; i++)
    // {
    //     // sum=sum*i;
    //     sum *= i;
    // }
    // printf("factorial=%d", sum);

    return 0;
}
// 5!=5*4*3*2*1=120
// 1*2*3*4*5=120