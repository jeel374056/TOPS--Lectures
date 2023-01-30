
#include <stdio.h>
int p = 100; //global variable
void greeting(int m)
{
    int a = 50; //local variable
    printf("good Morning");
    printf("%d",m);
    printf("%d",p);

}

int main()
{
    int b = 70; //local variable
    greeting(b);
    // printf("%d",a);
    printf("%d",p);
    return 0;
}
