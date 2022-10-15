#include<iostream>
using namespace std;


class Bank{
    public:
    char name[20];
    char account_type[10];
    int accountnumber;
    int balance;

    void assignvalue()
    {
        cout<<"\nEnter Name of the depositor:";
        gets(name);
        cout<<"\nType of Account:";
        cin>>account_type;
        cout<<"\nAccount Number:";
        cin>>accountnumber;
        cout<<"\nBalance amount in the account:";
        cin>>balance;
    }

    void diposit()
    {
        int bal;
        cout<<"\nEnter The amount you are withraw:";
        cin>>bal;
        balance+=bal;
        cout << "\nAmount deposited successfuly\nYour New Balance:" << balance;
    }
    
};

int main()
{
    return 0;
}