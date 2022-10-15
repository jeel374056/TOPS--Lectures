#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A()
    {
        cout << "Constuctor is calling...." << endl;
    }
    A(int a)
    {
        this->a = a;
        cout << "The value of a is " << a << endl;
    }
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "Addition is " << a + b << endl;
    }
    ~A()
    {
        cout << "Destructor calling...." << endl;
    }
};

int main()
{
    A a1(10, 20), a2(a1), a3;
    a1.display();
    a2.display();
    return 0;
}