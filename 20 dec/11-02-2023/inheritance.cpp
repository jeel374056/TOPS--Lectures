#include <iostream>
using namespace std;
class A // parent class //super class //base class
{
public:
    int a, b;

private:
    void addition()
    {
        int answer = a + b;
        cout << "Addition= " << answer << endl;
    }
};
class B : public A // child class//sub class/derived class
{
public:
    int m, n;
    void subtraction()
    {
        // addition();
        int subtract = m - n;
        cout << "Subtraction= " << subtract << endl;
    }
};
int main()
{
    A a1, a2, a3;
    B b1, b2, b3;
    b1.addition();
    b1.subtraction();
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