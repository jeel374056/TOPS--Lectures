#include <iostream>
using namespace std;
class student
{
public: // access modifiers
    int rollno, age;

    void getvalues()
    {
        cout << "Enter Rollno: ";
        cin >> rollno;
        cout << "Enter Age: ";
        cin >> age;
    }

    void showvalue()
    {
        cout << "Roll no is " << rollno << " and age is " << age << endl;
    }
};

int main()
{
    student ram, shyam;
    ram.getvalues();
    ram.showvalue();
    shyam.showvalue();
    return 0;
}
/*
class classname
{
    variables-----data members
    functions----methods/ member function
}

classname objectname;

*/