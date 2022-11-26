// returntype functionname(parameters)
// {
//     body
//     return values
// }
#include <stdio.h>
// return type-- int float char char[] void
// function name--name of function
// parameters---datatype variable
int demo()
{
    int answer,a=58,b=78;
    answer = a + b;
    return answer;
}
int main()
{
    int sum;
    int chk = 58;
    printf("First time");
    sum = demo();
    printf("addition = %d", sum);
    printf("\navii gayo pacha");
    return 0;
}