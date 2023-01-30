#include <stdio.h>
int main()
{
    int choice, quan, answer, final_answer = 0;
    int rate[4] = {100, 120, 150};
    // int dosa=100,bhaji=120,manch=150;

    printf("                    welcome to hotel ashish \n");
op:
    printf("\n                       Here is the MENU\n");
    printf("                 kindly select your prefernece number \n ");
    printf("                           1.dosa \n");
    printf("                           2.manchuriyam\n");
    printf("                           3.bhaji\n");
    printf("                           4.vadapan\n");
    printf(".....................................................................                \n");
    printf("                enter number of your chioce   ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("                 you have selected dosa\n\n ");
        printf("               kindly enter quantity of dosa ");
        scanf("%d", &quan);
        answer = rate[0] * quan;
        final_answer = final_answer + answer;
        // answer=dosa*quan;
        // printf("final bill is %d*%d =%d",dosa, quan ,answer);
        printf("               final bill is %d*%d =%d\n", rate[0], quan, answer);
        printf("Total Of all Food is %d", final_answer);

        goto op;
    }
    else if (choice == 2)
    {
        printf("               you have selected manchuryam\n ");
        printf("               kindly enter quantity of manchuryam ");
        scanf("%d", &quan);
        // answer=rate*quan;
        answer = rate[2] * quan;
        final_answer = final_answer + answer;

        printf("            final bill is %d*%d =%d\n", rate[2], quan, answer);
        printf("Total Of all Food is %d", final_answer);

        // printf("            final bill is %d*%d =%d",rate[2], quan ,answer);
        // printf("final bill is %d*%d =%d",manchuryam, quan ,answer);
        goto op;
    }
    else if (choice == 3)
    {
        printf("you have selected bhaji\n ");
        printf("kindly enter quantity of bhaji ");
        scanf("%d", &quan);
        // answer=bhaji*quan;
        answer = rate[3] * quan;
        final_answer = final_answer + answer;

        // printf("final bill is %d*%d =%d",bhaji  , quan ,answer);
        printf("final bill is %d*%d =%d\n", rate[3], quan, answer);
        printf("Total Of all Food is %d", final_answer);

        goto op;
    }
    else
    {
        printf("opps, enter valid number");
    }

    return 0;
}