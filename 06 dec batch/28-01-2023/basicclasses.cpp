#include <iostream>
using namespace std;
class student
{
public:
    int roll;
    string name;
    int age;
    string email;

    void getdata()
    {
        int a=45;
        cout << "Enter roll no,age,name,email : ";
        getline(cin, name);
        getline(cin, email);
        cin >> roll >> age;
    }
    void putdata()
    {
        // cout<<a<<endl;
        cout << "roll:" << roll << endl;
        cout << "Name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "email:" << email << endl;
    }
};

int main()
{
    student s1;
    s1.getdata();
    s1.putdata();

    return 0;
}