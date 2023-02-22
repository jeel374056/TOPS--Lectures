#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "A class Display Method";
    }
};
class B
{
public:
    void display()
    {
        cout << "B class Display Method";
    }
};
class C : public B, A
{
public:
    void showdata()
    {
       B::display();
        cout << "I am C class ";
    }
};

int main()
{
    A a1;
    B b1;
    C c1;
    a1.display();
    b1.display();
    c1.showdata();
    // c1.A::display();
    // c1.B::display();
    return 0;
}