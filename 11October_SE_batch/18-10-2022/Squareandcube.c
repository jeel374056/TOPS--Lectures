#include <stdio.h>
int main()
{
    int num;
    int square, cube;
    printf("Enter Value OF number: ");
    scanf("%d", &num);
    square = num * num;
    cube = square * num;
    printf("Your square is %d and cube is %d", square, cube);
    return 0;
}