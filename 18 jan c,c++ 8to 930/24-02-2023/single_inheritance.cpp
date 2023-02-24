#include <iostream>
using namespace std;
class A
{
public:
    int x, y;
    void getdata()
    {
        cout << "Enter Two VAlues: ";
        cin >> x >> y;
    }
    void showdata()
    {
        cout << "X= " << x << "Y= " << y << endl;
        ;
    }
};
class B :public A
{
public:
    int m, n;
    void getvalue()
    {
        cout << "Enter Two VAlues: ";
        cin >> m >> n;
    }
    void showvalue()
    {
        cout << "M= " << m << "N= " << n << endl;
    }
};
int main()
{
    A a1,a2;
    B b1,b2;
    b1.getdata();
    b1.showdata();
    b1.getvalue();
    b1.showvalue();
    return 0;
}