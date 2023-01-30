#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    FILE *fp;
    fp = fopen("Table.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(fp, "%d X %d = %d\n", num, i, num * i);
    }
    fclose(fp);

    return 0;
}