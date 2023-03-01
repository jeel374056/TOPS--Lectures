#include <iostream>
using namespace std;
class A
{
public:
    int a;
    void getvalue()
    {
        cout << "Enter VAlues of A: ";
        cin >> a;
    }
    void showvalue()
    {
        cout << "The value of a is  " << a << endl;
    }
    void display()
    {
        cout<<"I am Function of class A";
    }
};
class B
{
public:
    int b;
    void getdata()
    {
        cout << "Enter VAlues of B: ";
        cin >> b;
    }
    void showdata()
    {
        cout << "The value of b is  " << b << endl;
    }
    void display()
    {
        cout << "I am Function of class B";
    }
};
class calculation : public A, public B
{
public:
    int answer;
    void addition()
    {
        answer = a + b;
    }
    void showanswer()
    {
        cout << "addition= " << answer << endl;
    }
};
int main()
{
    calculation c1;
    // c1.getvalue();
    // c1.getdata();
    // c1.addition();
    // c1.showvalue();
    // c1.showdata();
    // c1.showanswer();
    c1.A::display();
    c1.B::display();
    return 0;
}
/*
local
global

*/