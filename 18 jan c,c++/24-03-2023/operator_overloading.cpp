#include <iostream>
using namespace std;
class demo
{
public:
    int a, b;
    void getdata()
    {
        cout << "Enter Two Values: ";
        cin >> a >> b;
    }
    void showdata()
    {
        cout << "value of a = " << a << " Value of B = " << b << endl;
    }

    void operator+(demo s1)
    {
        a = a + s1.a;
        b = b + s1.b;
    }
};

int main()
{
    demo d1;
    d1.getdata();
    d1.showdata();
    demo d2;
    d2.getdata();
    d2.showdata();
    d1 + d2; // operator overloading
    d1.showdata();
    return 0;
}