#include <iostream>
using namespace std;

class Bank
{
public:
    char name[20];
    int account_number;
    char account_type[20];
    int balance;

    void assignvalue()
    {
        cout << "Name of the depositor:" << endl;
        gets(name);
        cout << "Account Number:" << endl;
        cin >> account_number;
        cout << "Type of Account:" << endl;
        cin>>account_type;
        cout << "Balance amount in the account:" << endl;
        cin >> balance;
    }
    void deposit()
    {
        int bal;
        cout << "Enter The Amount To Deposit:" << endl;
        cin >> bal;
        balance += bal;
        cout << "\nAmount deposited successfuly\nYour New Balance:" << balance;
    }

    void check()
    {
        int bal;
        cout << "\nYour Balance:" << balance << "\nEnter Amount To Withdrow:";
        cin >> bal;
        if (bal <= balance)
        {
            balance -= bal;
            cout << "\nRemaining Balance" << balance;
        }
        else
        {
            exit(0);
        }
    }
    void display()
    {
        cout << "\nName:";
        puts(name);
        cout << "\nBalance:" << balance;
    }
};

int main()
{
    int i;
    Bank bk;
    bk.assignvalue();
    cout << "\n1.Your Information\n2.Deposite\n3.Withdraw\nEnter Your Choice:\n";
    cin >> i;
    if (i == 1)
    {
        bk.display();
    }
    else if (i == 2)
    {
        bk.deposit();
    }
    else if (i == 3)
    {
        bk.check();
    }
    return 0;
}