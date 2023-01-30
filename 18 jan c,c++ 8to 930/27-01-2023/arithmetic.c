#include <stdio.h>
int main()
{
    //binary operators
    //associativity of operator
    //opearators precedence
    int a = 45;
    int b = 20;
    int add = a + b;
    printf("%d + %d = %d\n", a, b, add);
    int sub = a - b;
    printf("%d - %d = %d\n", a, b, sub);
    int mul = a * b;
    printf("%d * %d = %d\n", a, b, mul);
    float div = (float)a / (float)b;
    printf("%d / %d = %.2f\n", a, b, div);
    int mod = a % b;
    printf("%d %% %d = %d\n", a, b, mod);
    return 0;
}
/*
typecasting--means changing one datatype to another
int a=85;
(float)a


*/