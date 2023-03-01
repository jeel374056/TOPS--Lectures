#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "I am Function of class A";
    }
};
class B : public A
{
public:
    int b;
    void showdisplay()
    {
        cout << "I am Function of class B";
    }
};
class C : public B
{
public:
    int b;
    void showfunc()
    {
        cout << "I am Function of class C";
    }
};
int main()
{
    C c1;
    c1.
    return 0;
}
/*
local
global

*/