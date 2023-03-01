#include <iostream>
using namespace std;
class A
{
public:
    int a, b;
    void getdata()
    {
        cout << "Enter Values : ";
        cin >> a >> b;
    }
    void showvalue()
    {
        cout << "A = " << a << "B = " << b << endl;
    }
    A operator+(A s1)
    {
        a = a + s1.a;
        b = b + s1.b;
    }
};
int main()
{
    A a1, a2;
    a1.getdata();
    a2.getdata();
    a1.showvalue();
    a2.showvalue();
    a1 + a2;
    a1.showvalue();
    a2.showvalue();
    return 0;
}