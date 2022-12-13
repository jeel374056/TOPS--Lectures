#include <stdio.h>
int addition(int a, int b)
{
    int answer = a + b;
    return answer;
    // return answer;
}

int main()
{
    int sum;
    sum = addition(45, 89);
    sum=addition();
    printf("Answer=%d", sum);
    return 0;
}