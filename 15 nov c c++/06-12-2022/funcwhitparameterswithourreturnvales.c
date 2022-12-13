#include <stdio.h>
void addition(int a, int b)//parameters
{
    int answer = a + b;
    printf("Answer=%d", answer);
}
//exit
//parameters and argument
int main()
{
    int m=90,k=45;
    addition(m, k);//argument
    addition(65, 38);
    return 0;
}