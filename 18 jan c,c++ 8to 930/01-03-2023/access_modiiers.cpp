#include <iostream>
using namespace std;
class A
{
private:
    int a, b;
public:
    void showvalue()
    {
        cout << "a= " << a << "b= " << b << endl;
    }
};
class B :private A
{
public:
    int x, y;

    void showdata()
    {
        cout << "x= " << x << "y= " << y;
        // cout<<"A= "<<a;
    }
};
int main()
{
    A a1;
    B b1;
    a1.showvalue();
    return 0;
}
/*
------------------ACCESS MODIFIERS---------------------------
                 Self Class------Child Class------main()
Public             YES---------------YES-------------YES
Protected          YES---------------YES-------------NO
Privtae            YES---------------NO--------------NO

*/