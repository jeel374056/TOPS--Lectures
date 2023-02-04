#include <iostream>
using namespace std;
class A // parent
{
private:
    int a, b;
    void showdata()
    {
        cout << "Enter A and B: ";
        cin >> a >> b;
        cout << "A= " << a << " B= " << b << endl;
    }
};
class B : public A // child
{
public:
    int x, y;
    void displaydata()
    {
        // showdata();
        cout << "Enter X and Y: ";
        cin >> x >> y;
        cout << "X= " << x << " Y= " << y << endl;
    }
};
class C : public B // child
{
public:
    int m, n;
    void getvalue()
    {
        cout << "Enter M and N: ";
        cin >> m >> n;
        cout << "M= " << m << " N= " << n << endl;
    }
};

int main()
{
    A a1, a2;
    B b1, b2;
    b1.displaydata();
    // c1.showdata();
    return 0;
}
/*
inheritance maens using properties of class by another class

parent class or super class or base class

child class or sub class or derived class



*/