#include <iostream>
using namespace std;
#define interestrate 3.50

class account
{
protected:
     char name[100];
     int accountNumber;
     float balance;
     int diposit;
     int withdrow;
     float interest;
     // float charges;
     int year = 1;
     int pin;
     
};

class saving : public account
{
public:
     void savingaccount()
     {
          cout << "PLEASE ENTER YOUR PIN NUMBER : ";
          cin >> pin;

          if (pin != 9844)
          {
               cout << endl
                    << endl
                    << "PLEASE ENTER VALID PIN :" << endl
                    << endl;
               cout << "--------------------------------------------------" << endl;
          }
          else
          {
               cout << endl
                    << endl
                    << "--------------ENNTER SAVING ACCOUNT INFROMATION---------------------" << endl
                    << endl;

               cout << "ENTER ACCOUNT HOLDER NAME : ";
               cin >> name;

               cout << "ENTER ACCOUNT NUMBER : ";
               cin >> accountNumber;

               cout << "ENTER BANK BALANCE : ";
               cin >> balance;

               void chekbalance();
               {
                    cout << endl
                         << endl
                         << "YOUR CURRENT BALANCE IS : " << balance << ".RS" << endl
                         << endl;
                    cout << "--------------------------------------------------" << endl;
               }
               void dipositAmount();
               {
                    cout << "ENTER DIPOSIT AMOUNT : ";
                    cin >> diposit;

                    balance = balance + diposit;

                    cout << endl
                         << endl
                         << "CLEAR BALANCE IS : " << balance << ".RS" << endl;
                    cout << endl
                         << "--------------------------------------------------" << endl;
               }

               void withdrowAmount();
               {
                    cout << endl
                         << "YOUR SAVING ACCOUNT PER ONE TRNSACTION LIMIT IS 10,000 RS" << endl
                         << endl;
                    cout << "ENTER WITHDROW AMOUNT : ";
                    cin >> withdrow;

                    if (withdrow > (balance - 3000))
                    {
                         cout << endl
                              << "INSUFFISENT BALANCE" << endl;
                    }
                    else
                    {
                         if (withdrow <= 10000)
                         {
                              cout << "COLLCET YOUR CASE :" << endl
                                   << endl;

                              balance = balance - withdrow;

                              cout << "CLEAR BALANCE IS : " << balance << ".RS" << endl;
                              cout << endl
                                   << "--------------------------------------------------" << endl;
                         }
                    }

                    void intrestAmount();
                    {
                         cout << "YOU GOT INTREST ONLE ONCE PER YEAR :" << endl
                              << endl;

                         interest = balance * interestrate * year / 100;

                         cout << "YOUR INTREST AMOUNT IS : " << interest << ".RS" << endl
                              << endl;

                         balance = balance + interest;

                         cout << "CLEAR BALANCE IS : " << balance << ".RS" << endl;
                         cout << endl
                              << "--------------------------------------------------" << endl;
                    }

                    void Checkbook();
                    {
                         cout << endl
                              << "SAVING ACCOUNT HOLDER GET ONLY 10 PAGES CHECKBOOK " << endl
                              << endl;

                         int pages;

                         cout << "ENTER CHECKBOOK PAGES : ";
                         cin >> pages;

                         if (pages != 10)
                         {
                              cout << "PLEASE ENTER VALID CHECKBOOK INFROMATION :" << endl;
                         }
                         else
                         {
                              cout << endl
                                   << "YOUR CHECKBOOK IS CURIEAR AT YOUR HOME WITHIN 2 DAYS :" << endl;
                              cout << endl
                                   << "--------------------------------------------------" << endl;
                         }
                    }
               }

               void getinfromation();
               {
                    cout << endl
                         << endl
                         << "-----------------SAVING ACCOUNT INFROMATION-------------------" << endl
                         << endl;

                    cout << "NAME              : " << name << endl
                         << endl;
                    cout << "ACCOUNT NUMBER    : " << accountNumber << endl;
                    cout << "CURRENT BALANCE   : " << balance - withdrow - interest << ".RS" << endl;
                    cout << "DIPOSIT AMOUNT    : " << diposit << ".RS" << endl;
                    cout << "WITHDROW AMOUNT   : " << withdrow << ".RS" << endl;
                    cout << "INTREST AMOUNT    : " << interest << ".RS" << endl;
                    cout << "CLEAR BALANCE     : " << balance << ".RS" << endl;
               }
          }
     }
};
class current : public account
{
public:
     void currentAccount()
     {
          cout << endl
               << "PLEASE ENTER YOUR PIN NUMBER : ";
          cin >> pin;

          if (pin != 8747)
          {
               cout << endl
                    << endl
                    << "PLEASE ENTER VALID PIN :" << endl
                    << endl;
               cout << "--------------------------------------------------" << endl;
          }
          else
          {
               cout << endl
                    << endl
                    << "-----------------ENTER CURRENT ACCOUNT INFROMATION-------------------" << endl
                    << endl;

               cout << "ENTER ACCOUNT HOLDER NAME : ";
               cin >> name;

               cout << "ENTER ACCOUNT NUMBER : ";
               cin >> accountNumber;

               cout << "ENTER BANK BALANCE : ";
               cin >> balance;

               void chekbalance();
               {
                    cout << endl
                         << endl
                         << "YOUR CURRENT BALANCE IS : " << balance << ".RS" << endl
                         << endl;
                    cout << "--------------------------------------------------" << endl;
               }
               void dipositAmount();
               {
                    cout << "ENTER DIPOSIT AMOUNT : ";
                    cin >> diposit;

                    balance = balance + diposit;

                    cout << endl
                         << endl
                         << "CLEAR BALANCE IS : " << balance << ".RS" << endl;
                    cout << endl
                         << "--------------------------------------------------" << endl;
               }

               void withdrowAmount();
               {
                    cout << endl
                         << "YOUR CURRENT ACCOUNT PER ONE TRNSACTION LIMIT IS 20,000 RS" << endl
                         << endl;
                    cout << "ENTER WITHDROW AMOUNT : ";
                    cin >> withdrow;

                    if (withdrow > (balance - 10000))
                    {
                         cout << endl
                              << "INSUFFISENT BALANCE" << endl;
                    }
                    else
                    {
                         if (withdrow <= 20000)
                         {
                              cout << "PLEASE COLLCET YOUR CASE :" << endl
                                   << endl;

                              balance = balance - withdrow;

                              cout << "CLEAR BALANCE IS : " << balance << ".RS" << endl;
                              cout << endl
                                   << "--------------------------------------------------" << endl;
                         }
                    }

                    void interestAmount();
                    {
                         cout << "CURRENT ACCOUT HOLDER NOT GETTING ANY INTEREST :" << endl
                              << endl;

                         cout << endl
                              << "--------------------------------------------------" << endl;
                    }

                    void Checkbook();
                    {
                         cout << endl
                              << "SAVING ACCOUNT HOLDER GET 50 PAGES CHECKBOOK " << endl
                              << endl;

                         int pages;

                         cout << "ENTER CHECKBOOK PAGES : ";
                         cin >> pages;

                         if (pages != 50)
                         {
                              cout << "PLEASE ENTER VALID CHECKBOOK INFROMATION :" << endl;
                         }
                         else
                         {
                              cout << endl
                                   << "YOUR CHECKBOOK IS CURIEAR AT YOUR HOME WITHIN 2 DAYS :" << endl;
                              cout << endl
                                   << "--------------------------------------------------" << endl;
                         }
                    }
               }

               void getinfromation();
               {
                    cout << endl
                         << endl
                         << "-----------------CURRENT ACCOUNT INFROMATION-------------------" << endl
                         << endl;

                    cout << "NAME              : " << name << endl
                         << endl;
                    cout << "ACCOUNT NUMBER    : " << accountNumber << endl;
                    cout << "CURRENT BALANCE   : " << balance - (diposit - withdrow) << ".RS" << endl;
                    cout << "DIPOSIT AMOUNT    : " << diposit << ".RS" << endl;
                    cout << "WITHDROW AMOUNT   : " << withdrow << ".RS" << endl;
                    cout << "CLEAR BALANCE     : " << balance << ".RS" << endl;
               }
          }
     }
};
int main()
{
     int i, choice;

     cout << endl
          << "1.SAVING ACCOUNT : " << endl;
     cout << "2.CURRENT ACCOUNT :" << endl
          << endl;
     cout << "ENTER YOUE CHOICE : ";
     cin >> choice;

     switch (choice)
     {
     case 1:
     {
          saving s;
          s.savingaccount();
     }
     break;
     case 2:
     {
          current c;
          c.currentAccount();
     }
     break;
     }

     return 0;
}