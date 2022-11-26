#include <stdio.h>
#include <string.h>
int main()
{
    char day[100];
    printf("Enter day: ");
    scanf("%s", day);
    if (strcmp(day, "sunday") == 0)
    {
        printf("Day no 1:");
    }
    else if (strcmp(day, "monday") == 0)
    {
        printf("Day no 2:");
    }
    return 0;
}