#include <stdio.h>
int main()
{
    int a;
    char name[10];
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter NAme: ");
    scanf("%s", name);
    FILE *fp;
    fp = fopen("Demo.txt", "w");
    fprintf(fp, "A=%d and name =%s", a, name);
    fclose(fp);
    return 0;
}