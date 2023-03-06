#include <iostream>
using namespace std;
class A //abstract class
{
public:
    virtual void showvalue()=0;  //pure virtual function
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
    // A a1;
    B b1;
    // a1.showvalue();
    b1.showvalue();
    return 0;
}
/*

pure virtual function
*/