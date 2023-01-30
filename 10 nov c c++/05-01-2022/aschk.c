#include <stdio.h>
int main()
{
    int netAmount = 0;
top:
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("    WELCOME TO RESORT HEVEN ||\n");
    printf("    \tNAMSTEY SIR\\MAM \n");
    printf("\n    CODE     SERVICE\n      01       FOR MENU\n      00       FOR EXIT \n         ENTER CODE  : ");
    // MENU AND EXIT FUNCTION USING IF ELSE :
    int service;
    scanf("%d", &service);
    if (service == 1)   
    {
    }
    else if (service == 0)
    {
        goto exit;
    }
    else
    {
        printf("PLEASE ENTER VALID NUMBER\n");
        goto top;
    }
    // MENU :
    menu:
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("               ||   HEVEN  RESORT   ||\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("                   --:  MENU :--\n");
    printf("    Code    Pizza :                           Price\n");
    printf("     01       Margarita Pizza                  80/-\n");
    printf("     02       Mushroom Pizza                   130/-\n");
    printf("     03       Double Cheese Pizz               180/-\n");
    printf("            food dishes :-\n");
    printf("     04       Gujarati Dish                    280/-\n");
    printf("     05       Panjabi Dish                     300/-\n\n\t\t\t***\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    // ORDER MATHOD ;
    int food, qnt, amount;
    printf("\n   01-05=>  FOR ORDER:                     0 =>  EXIT:\n");
    printf("\t\t       CAN I HELP YOU :");
    scanf("%d", &food);
    printf("=========================================================\n");
    if (food == 0)
    {bill:
        printf("=========================================================\n");
        printf("\n         YOUR NET ANOUNT = %d/-\n      **THANKING YOU****VISIT AGAIN**\n", netAmount);
        printf("=========================================================\n");
        goto end;
    }
    else if (food == 1)
    {
        printf("ITEM NAME :                 QTY");
        printf("\n    Margarita Pizza :       ");
        scanf("%d", &qnt);
        amount = qnt * 80;
        netAmount+=amount;
        printf("               RATE :       80");
        printf("\n             AMOUNT :       %d/- ", amount);
        printf("\n         NET AMOUNT :       %d/- \n", netAmount);
    }
    else if (food == 2)
    {
        printf("ITEM NAME :                 QTY");
        printf("\n     Mushroom Pizza :        ");
        scanf("%d", &qnt);
        amount = qnt * 130;
       netAmount+=amount;
        printf("               RATE :       130");
        printf("\n             AMOUNT :       %d/- ", amount);
        printf("\n         NET AMOUNT :       %d/- \n", netAmount);
    }
    else if (food == 3)
    {
        printf("ITEM NAME :                 QTY");
        printf("\n  Double Cheese Pizza :     ");
        scanf("%d", &qnt);
        amount = qnt * 180;
        netAmount+=amount;
        printf("                 RATE :     180");
        printf("\n               AMOUNT :     %d/-", amount);
        printf("\n           NET AMOUNT :     %d/-\n", netAmount);
    }
    else if (food == 4)
    {
        printf("ITEM NAME :                 QTY");
        printf("\n  Gujarati Dish  :          ");
        scanf("%d", &qnt);
        amount = qnt * 280;
        netAmount+=amount;
        printf("            RATE :          280");
        printf("\n          AMOUNT :          %d/-", amount);
        printf("\n      NET AMOUNT :          %d/-\n", netAmount);
    }
    else if (food == 5)
    {
        printf("ITEM NAME :                 QTY");
        printf("\n  Panjabi Dish :             ");
        scanf("%d", &qnt);
        amount = qnt * 300;
        netAmount+=amount;
        printf("         RATE :             300");
        printf("\n       AMOUNT :             %d/-", amount);
        printf("\n   NET AMOUNT :             %d/-\n", netAmount);
    }
    else
    {
        printf("please enter valid number !!\n");
    }
    //asking more order ;
    final:
    printf("\nDO YOU WANT MORE ITEMS ORDER 'Y' OR 'N' :");
    char moreOrder;
    scanf("%c", &moreOrder);
    scanf("%c", &moreOrder);
    if (moreOrder == 'Y' || moreOrder == 'y')
    {
        goto menu;
   }else if(moreOrder=='n'||moreOrder=='N'){
    goto bill;
   }else{
    printf("please enter valid input !!");
    goto final;
   }
// EXIT :
exit:
   printf("=========================================================\n");
   printf("\n");
   printf("                     THANK-YOU SIR\\MAM\n                     PLEASE COME AGAIN :-");
   printf("\n=========================================================\n");
end:
   getch();
   return 0;
}