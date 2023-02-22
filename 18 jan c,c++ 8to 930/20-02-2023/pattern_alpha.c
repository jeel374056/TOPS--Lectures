#include <stdio.h>
int main()
{
    char z = 'A';
    for (int i = 1; i < 20; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", z);
        }
        z++;
        printf("\n");
    }
    return 0;
}
// A
// B B
// C C C
// D D D D