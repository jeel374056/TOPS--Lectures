#include <iostream>
using namespace std;
class base
{
public:
    int a;

public:
    int b;
    void getvalue()
    {
        cout << "Enter Value: ";
        cin >> a >> b;
    }
    void showvalue()
    {
        cout << "Value of a " << a << " value of b " << b << endl;
    }
};
class derived : public base
{
public:
    int x, y;
    void getdata()
    {
        showvalue();
        cout << "Enter Value: ";
        cin >> x >> y;
    }
    void showdata()
    {
        cout << "Value of x " << x << " value of a" << a << endl;
    }
};
int main()
{
    base b1, b2;
    derived d1, d2;
    b1.a = 85;
    return 0;
}
/*
base class---super class----parent class
derived class---sub class----child class

*/