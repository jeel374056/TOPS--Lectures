#include <iostream>
using namespace std;
class A
{
public:
     void addition()
    {
        cout << "Addition of Class A";
    }
    void subtraction()
    {
        cout << "Subtraction of A";
    }
};
class B : public A
{
    // void addition()
    // {
    //     cout << "Addition of class B and removed Class A addition";
    // }
    void multiplication()
    {
        cout << "Multiplication of B";
    }
};
int main()
{
    A obj1;
    B obj2;
    obj1.addition();
    obj1.subtraction();
    obj2.
    return 0;
}