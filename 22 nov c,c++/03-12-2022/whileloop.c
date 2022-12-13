// while(condition)
// {
//     body;
// }
#include <stdio.h>
int main()
{

    int i = 1, num;
    printf("Enter Number");
    scanf("%d", &num);
    do
    {
        printf("%d*%d=%d\n", num, i, num * i);
        i++;
    }
    while (i < 10);
    return 0;
}