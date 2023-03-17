#include <stdio.h>
int main()
{
    int num;
    printf("Enter Day Number: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    {
        printf("Monday");
        break;
    }
    case 2:
    {
        printf("tueday");
        break;
    }
    case 3:
    {
        printf("Wed");
        break;
    }
    case 4:
    {
        printf("thur");
        break;
    }
    case 5:
    {
        printf("Fri");
        break;
    }
    case 6:
    {
        printf("Sat");
        break;
    }
    case 7:
    {
        printf("Sun");
        break;
    }
    default:
    {
        printf("invalid Input\nEnter Between 1 to 7");
        break;
    }
    }

    return 0;
}