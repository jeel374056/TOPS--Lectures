#include <stdio.h>
int main()
{
    int age;
    float weight;
    char bloodgroup, symbol;
    printf("Enter your age, weight and blood group: ");
    scanf("%d %f %c%c", &age, &weight, &bloodgroup, &symbol);
    printf("Age\t:\t%d\nWeight\t:\t%.2f\nb_group\t:\t%c%c", age, weight, bloodgroup, symbol);
    return 0;
}