#include <iostream>
using namespace std;
class student
{
public:
    int age, rollno;
    string name;
    void getdata()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roolno and Age: ";
        cin >> rollno >> age;
    }
    void showdata()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "rollno = " << rollno << endl;
    }
};

int main()
{
    student ob1, ob2, ob3, ob4;
    // ob1.getdata();
    // ob1.showdata();
    ob2.showdata();
    return 0;
}