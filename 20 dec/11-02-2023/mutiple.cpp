#include <iostream>
using namespace std;
class A // parent class //super class //base class
{
public:
    int a, b;
    void subtraction()
    {
        int answer = a + b;
        cout << "Addition= " << answer << endl;
    }
};
class B // child class//sub class/derived class
{
public:
    int m, n;
    void subtraction()
    {
        int subtract = m - n;
        cout << "Subtraction= " << subtract << endl;
    }
};
class C : public A, public B
{
public:
    int x, y;
    void multiplication()
    {
        B::subtraction();
        A::subtraction();
        int multi = x * y;
        cout << "Multiply= " << multi;
    }
};
int main()
{
    A a1, a2, a3;
    B b1, b2, b3;
    C c1, c2, c3;
    c1.B::subtraction();
    return 0;
}
/*
inheritance is accessing or using one class properties by another class

parent class/super class/base class

child class/sub class/derived class


there are 5 types of inheritance
1)single inheritance
2)multilevel inheritance
3)multiple inheritance
4)hierarchical inheritance
5)hybrid inheritance
*/