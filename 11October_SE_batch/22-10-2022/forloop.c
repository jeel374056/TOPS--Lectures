/*
int i;
for(i=1050;i<1055;i++)
{
    body
}
*/
#include <stdio.h>
int main()
{
    int i, sum = 0;
    int num, ans;
    printf("Enter Number For table: ");
    scanf("%d", &num);
    for (i = 1; i < 21; i++)
    {
        ans = i * num;
        printf("%d * %d = %d\n", num, i, ans);
    }

    return 0;
}

/*
loops in c
entry control
for loop
while loop

exit control
do while loop
*/
/*
for(initialization;condition;increment/decrement)
*/
// for(i=0;i<10;i++)
// {
//     body
// }
// initialization
// while(condition)
// {
//     body
//     increment/decrement
// }
// int i=0;
// while(i<10)
// {
//     body
//     i++;
// }