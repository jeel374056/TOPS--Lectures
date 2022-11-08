#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time;
    float answer, base;
    printf("Enter principal,Rate,time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    base = 1 + (rate / 100);
    answer = principal * pow(base, time);
    printf("your compound values is %f", answer);
    return 0;
    // pow(base,power)
}