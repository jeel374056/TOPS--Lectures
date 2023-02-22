#include <iostream>
using namespace std;
class A
{
public:
    virtual void addition()
    {
        int a = 45;
        int b = 98;
        cout << "Addition in Class A = " << a + b << endl;
    }
};
class B : public A
{
public:
    void addition()
    {
        int m = 54;
        int n = 125;
        cout << "Addition in Class B = " << m + n << endl;
    }
};
int main()
{
    A a1;
    B b1;
    a1.addition();
    b1.addition();

    return 0;
}