#include <stdio.h>
void addition()
{
    int x, y, answer;
    printf("Enter Two value: ");
    scanf("%d %d", &x, &y);
    answer = x + y;
    printf("addition=%d", answer);
}
int main()
{
    addition(18);
    addition();
    return 0;
} /*
 function declaration; always use before main()
 returntype function_name(paremeters);
 function definition
 returntype function_name(paremeters)
 {
     body:
 }

 function calling
 functionanme()
 */