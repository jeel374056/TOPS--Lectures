#include <stdio.h>

int main()
{
    int choice, quan, answer;
    int rate[3] = {100, 120, 150};
    char check;
    int total = 0;

    printf("1. Dosa         100\n");
    printf("2. Manchuriyam  120\n");
    printf("3. Bhaji        150\n");
    printf("\n");

    do
    {
        printf("Enter number of your chioce\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("You have selected Dhosa\n");
            printf("Enter quantity of Dhosa\n");
            scanf("%d", &quan);
            answer = rate[0] * quan;
            total += answer;
            printf("BILL %d * %d = %d\n", rate[0], quan, answer);
        }
        else if (choice == 2)
        {
            printf("You have selected Manchuryam\n");
            printf("Enter quantity of Manchuryam\n");
            scanf("%d", &quan);
            answer = rate[1] * quan;
            total += answer;
            printf("BILL %d * %d = %d\n", rate[1], quan, answer);
        }
        else if (choice == 3)
        {
            printf("You have selected Bhaji\n");
            printf("Enter quantity of Bhaji\n");
            scanf("%d", &quan);
            answer = rate[2] * quan;
            total += answer;
            printf("BILL %d * %d = %d\n", rate[2], quan, answer);
        }
        else
        {
            printf("opps\n");
        }
        printf("\nDo you wanna eat more. \n1. Yes for 'y'.\n2. No for 'n'.\n");
        scanf("%s", &check);
        printf("\n");
    } while (check == 'y');

    printf("Total %d\n", total);
    printf("Thank You");

    return 0;
}