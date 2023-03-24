#include <stdio.h>
int main()
{
    int num;
    int a = 50;
    printf("Enter Day Number: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    {
        printf("monday");
        break;
    }
    case 2:
    {
        printf("tuesday");
        break;
    }
    case 3:
    {
        printf("Wednesday");
        break;
    }
    case 4:
    {
        printf("thursday");
        break;
    }
    case 5:
    {
        printf("friday");
        break;
    }
    case 6:
    {
        printf("Saturday");
        break;
    }
    case 7:
    {
        printf("Sunday");
        break;
    }
    default:
    {
        printf("Enter between 1 to 7");
        break;
    }
    }

    return 0;
}
/*
switch(variable)
{
    case 'a':
    {

        break;
    }
    case 'i':
    {

        break;
    }
    case '+':
    {

        break;
    }
    default:
    {

        break;
    }
}

*/