#include<iostream>
using namespace std;
class account
{
    string name;
    string acc_type;
    int acc_number;
    float balance;
    public:
    void details()
    {
        void setdata();
        {
            cout<<"enter account holder name: ";
            cin>>name;

            cout<<"enter type :";
            cin>>acc_type;
             
            cout<<"enter your account number: ";
            cin>>acc_number;

            cout<<"enter account balance :";
            cin>>balance;
        }
        void seebalance();
        {
            cout<<"your balance is :"<<balance<<endl;
        }
        void diposit();
        {
            int diposit;
            cout<<"enter ammount :";
            cin>>diposit;

            balance=balance + diposit;
            cout<<"your balance is :"<<balance<<endl;
        }
        void withdrow();
        {
            int withdrow;
            cout<<"enter withdrow amount :";
            cin>>withdrow;

            if(withdrow<=10000)
            {
                balance=balance-withdrow;
                cout<<"your current balance is:"<<balance<<endl;
            }
            else
            {
                cout<<"please enter ammount in 1000 500 100"<<endl;
            }
        }
        void display_details();
        {
            cout<<"account details"<<endl;
            cout<<"name"<<name<<endl;
            cout<<"acc_type"<<acc_type<<endl;
            cout<<"acc_number"<<acc_number<<endl;
            cout<<"blance"<<balance<<endl;
        }

    }
};
int main()
{
    account a;
    a.details();
    return 0;
}