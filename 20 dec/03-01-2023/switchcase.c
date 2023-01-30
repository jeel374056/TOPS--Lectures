#include <stdio.h>
int main()
{
    int num;
    printf("Enter number From 1 to 7");
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
        printf("tue");
        break;
    }
    case 3:
    {
        printf("wed");
        break;
    }
    case 4:
    {
        printf("thu");
        break;
    }
    case 5:
    {
        printf("fri");
        break;
    }
    case 6:
    {
        printf("sat");
        break;
    }
    case 7:
    {
        printf("sun");
        break;
    }
    default:
    {
        printf("Enter number between 1 to 7");
        break;
    }
    }
    return 0;
}

/*
switch(num)
{
    case 1:
    {
        printf("Monday");
    }
    case 2:
    {
        printf("tuesday");
    }

}


*/