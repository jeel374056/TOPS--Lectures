#include <stdio.h>
int main()
{
    int num;
    printf("Enter Day Number: ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Monday");
    }
    else if (num == 2)
    {
        printf("tuesday");
    }
    else if (num == 3)
    {
        printf("Wednesday");
    }
    else if (num == 4)
    {
        printf("thursday");
    }
    else if (num == 5)
    {
        printf("Friday");
    }
    else if (num == 6)
    {
        printf("Saturday");
    }
    else if (num == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input\nEnter number Between 1 to 7 only");
    }



    
    return 0;
}
/*
switch(variable)
{
    case value1:
    {

    }
    case value2:
    {

    }
    case value3:
    {

    }
    case value4:
    {

    }
    case value5:
    {

    }
}


*/