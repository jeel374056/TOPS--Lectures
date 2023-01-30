#include <stdio.h>
void addition(int m,int d)
{
    int a, b;
    int answer;
    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);
    answer = a + b;
    printf("Addition=%d", answer);
}

int main()
{
    int k = 90;
    int x=89;
    addition(k,x); //parameters
    addition();
    return 0;
}