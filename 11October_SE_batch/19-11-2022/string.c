#include <stdio.h>
int main()
{
    char name[10] = {'H', 'A', 'R', 'I'};
    char name2[10] = {'H', 'A', 'R', 'I'};
    char name1[10] = "hello";
    // printf("%s %s", name2, name1);
    for (int i = 0; i < 4; i++)
    {
        printf("%c\n", name[i]);
    }
    char use[50];
    printf("Enter stirng: ");
    // scanf("%s", use);
    gets(use);
    // printf("%s", use);
    puts(use);

    // printf("%s\n", name);
    // int num[50] = {10, 20, 30, 40, 50, 50};
    // char n1 = 'p';
    // printf("%d", n1);
    // int a = 10;
    // int *p = &a;
    // printf("%p", p);
    return 0;
}
