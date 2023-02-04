#include <stdio.h>
int main()
{
    int day;
    printf("Enter Day: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
    {
        printf("Monday");
        break;
    }
    case 2:
    {
        printf("Tuesday");
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
        printf("Friday");
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
        printf("Please enter value between 1 to 7 only \n");
        break;
    }
    }

    return 0;
}
/*
limitations of switch case

it will work only for exact value
it will not work on condition
switch case will not stop when one condition is true so we have to stop it explicitly using break statement

switch(value)
{
    case value1:
    {
        body

        break;
    }
    case value2:
    {
        body

        break;
    }
    ..
    ..
    ..
    deafult:
    {
        body

        break;
    }
}



*/