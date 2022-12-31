#include <stdio.h>
int main()
{
    int total_amount = 0;
    int Amount;
    int quantity;
    char option;
start:
    printf("1.pizza\t\tprice=180/pcs\n");
    printf("2.Burger\tprice=100/pcs\n");
    printf("3.Dosa\t\tprice=120/pcs\n");
    printf("4.Idli\t\tprice=50/pcs\n");
    int choice;
    printf("Enter Choicce: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("you have selected Pizza\n");
    }
    else if (choice == 2)
    {
        printf("you have selected Burger\n");
    }
    else if (choice == 3)
    {
        printf("you have selected Dosa\n");
    }
    else if (choice == 4)
    {
        printf("you have selected Idli\n");
    }
    printf("Enter Quantity: ");
    scanf("%d", &quantity);
    if (choice == 1)
    {
        Amount = quantity * 180;
    }
    else if (choice == 2)
    {
        Amount = quantity * 100;
    }
    else if (choice == 3)
    {
        Amount = quantity * 120;
    }
    else if (choice == 4)
    {
        Amount = quantity * 50;
    }
    total_amount += Amount;
    printf("\n Amount = %d", Amount);
    printf("\ntotalAmount= %d", total_amount);
    printf("\nDo you want to place more orders? y or n : ");
    scanf("%s", &option);
    if (option == 'y')
    {
        goto start;
    }
    else
    {
        printf("\ntotal Bill is %d", total_amount);
        printf("\nVisit again");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
    }
    return 0;
}