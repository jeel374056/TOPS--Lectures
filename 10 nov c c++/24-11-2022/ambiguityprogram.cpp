/*
Program to solve ambiguity error
*/
#include <iostream>
using namespace std;
class A
{
public:
    void addition()
    {
        printf("This is function of Class A");
    }
    void subtraction()
    {
        cout << "Hello";
    }
};
class B
{
public:
    void addition()
    {
        printf("This is function of Class B");
    }
    void multiplication()
    {
        cout << "Multiplication";
    }
};
class C : public A, B
{
public:
    void show()
    {
        printf("This is function of Class C");
        B::addition();//:: scope resolution operator
    }
};
int main()
{
    C obj1;
    obj1.show();
    return 0;
}