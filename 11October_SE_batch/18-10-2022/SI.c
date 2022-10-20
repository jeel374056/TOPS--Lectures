// (p*r*t)/100
#include <stdio.h>
int main()
{
    int amount;
    int rate;
    int time;
    int SI;
    printf("Enter Your Amount,Rate of Interest,Time");
    scanf("%d %d %d", &amount, &rate, &time);
    SI = (amount * rate * time) / 100;
    printf("Your Interest IS : %d", SI);
    return 0;
}