#include <iostream>
using namespace std;
class A
{
public:
    virtual void showvalue()
    {
        cout << "I am FUnction of class A" << endl;
    }
};
class B : public A
{
public:
    void showvalue()
    {
        cout << "I am the function of class B" << endl;
    }
};
int main()
{
    A a1;
    B b1;
    a1.showvalue();
    b1.showvalue();
    return 0;
}