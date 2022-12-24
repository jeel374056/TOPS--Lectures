#include <stdio.h>
int main()
{
    int a = 50, b = 30;
    int answer = a++ + --b;
    printf("answer =%d ", answer);
    // a++;
    // ++a;
    // printf("%d", ++a);
    // printf(" %d ", a);
    return 0;
}
/*
++ --
post after varible or value a++ b-- me apna kaam badme karunga pehle dusre kaam karunga
pre before variable or value ++a --b

*/