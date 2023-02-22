#include <iostream>
using namespace std;
class A // parent class
{
public:
    int a = 50, b = 60;
    void addition()
    {
        int answer = a + b;
        cout << "Addition= " << answer << endl;
    }
};
class B : public A // child class
{
public:
    int m = 40, n = 10;
    void subtraction()
    {
        int subtract = m - n;
        cout << "aubtraction= " << subtract << endl;
    }
};
class C : public A
{
public:
    int x = 22, y = 11;
    void multiplication()
    {
        subtraction();
        int multiply = x * y;
        cout << "Multiplication= " << multiply << endl;
    }
};
int main()
{
    A a1, a2, a3;
    B b1, b2, b3;
    C c1;
    c1.addition();
    c1.subtraction();
    c1.multiplication();
    return 0;
}
/*
parent class /super class/ base class

child class/sub class/derived class

types of inheritance

1_single inheritance
2_Multilevel inheritance
3_multiple inheritance
4_hierarchical inheritance
5_hybrid inheritance


*/