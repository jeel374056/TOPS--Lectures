#include <iostream>
using namespace std;

class bank
{
    string name;
    int AC_number;
    string AC_type;
    int balance;
    int Update_balance;
    int update_balance1;

public:
    void Value(string name, int AC_number, string AC_type, int balance)
    {
        cout << "Name of the Dipositor :" << endl;
        getline(cin, name);
        cout << "Account Number :" << endl;
        cin >> AC_number;
        cout << "Type of Account :" << endl;
        cin.ignore();
        getline(cin, AC_type);
        cout << "Balance amount in the Account :" << endl;
        cin >> balance;
    }

    void diposit(int diposit)
    {
        cout << "Before deposite, your account balance is :" << balance << endl;
        cout << "the deposit amount is :" << endl;
        cin >> diposit;
        cout << "After Deposite " << diposit << "Rs. The Balance Is " << diposit + balance << endl
             << endl;
        Update_balance = diposit + balance;
    }

    void Withdrow(int Withdrow)
    {
        cout << "Before withdraw, your account balance is :" << Update_balance << endl;
        cout << "the withdraw amount is :" << endl;
        cin >> Withdrow;
        cout << "After withdraw " << Withdrow << "Rs. the balance is " << Update_balance - Withdrow << endl
             << endl;
        update_balance1 = Update_balance - Withdrow;
    }

    void print()
    {
        cout << " Represent A Bank Account" << endl;
        cout << "Name of the Dipositor -" << name << endl;
        cout << "Account Number -" << AC_number << endl;
        cout << "Type of Account -" << AC_type << endl;
        cout << "Balance amount in the Account -" << balance << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "Before Deposite, Your Account Balance Is -" << balance << endl;
        cout << "The Deposite Amount Is -" << diposit << endl;
        cout << "After Deposite" << diposit << "Rs. The Balance Is" << Update_balance << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "Before Withdraw, Your Account Balance Is -" << Update_balance << endl;
        cout << "The Withdraw Amount Is -" << Withdrow << endl;
        cout << "After Withdraw " << Withdrow << "Rs. The Balance Is " << update_balance1 << endl;
        cout << "----------------------Wellcome---------------------" << endl;
    }
};

int main()
{

    string name;
    int AC_number;
    string AC_type;
    int balance;
    int Update_balance;
    int update_balance1;
    int diposit;
    int Withdrow;

    bank o1;
    o1.Value(name, AC_number, AC_type, balance);
    o1.diposit(diposit);
    o1.Withdrow(Withdrow);
    o1.print();
    return 0;
}